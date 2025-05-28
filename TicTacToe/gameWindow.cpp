#include "gameWindow.h"
#include "mainwindow.h"
#include "ui_gameWindow.h"

#include <QMessageBox>
#include <QScreen>
#include <QTimer>
#include <QFont>
#include <QRect>

gameWindow::gameWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gameWindow)
{
    ui->setupUi(this);

    buttons[0][0] = ui->btn00;
    buttons[0][1] = ui->btn01;
    buttons[0][2] = ui->btn02;

    buttons[1][0] = ui->btn10;
    buttons[1][1] = ui->btn11;
    buttons[1][2] = ui->btn12;

    buttons[2][0] = ui->btn20;
    buttons[2][1] = ui->btn21;
    buttons[2][2] = ui->btn22;

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            connect(buttons[i][j], &QPushButton::clicked, this, &gameWindow::on_buttonClicked);
        }
    }


    this->setFixedSize(this->size());

    this->setStyleSheet("background-image: url(:/images/background.jpg);"
                        "background-repeat: no-repeat;"
                        "background-position: center;");
}

gameWindow::~gameWindow()
{
    delete ui;
}

void gameWindow::setGameModeText(const QString &text){
    ui->GameModeText->setText(text);
}

void gameWindow::setGameMode(GameMode mode) {
    gameMode = mode;
}

void gameWindow::on_Back_clicked()
{
    MainWindow *mainwindow=new MainWindow();

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->availableGeometry();

    mainwindow->move(screenGeometry.center() - mainwindow->rect().center());

    mainwindow->show();
    this->hide();
}

void gameWindow::on_Restart_clicked()
{
    resetGame(true);

    ui->LeftSidePoint->setText("0");
    ui->RightSidePoint->setText("0");

}

char gameWindow::getWinner() {
    for (int i = 0; i < 3; ++i) {
        // Check rows
        if (!buttons[i][0]->text().isEmpty() &&
            buttons[i][0]->text() == buttons[i][1]->text() &&
            buttons[i][1]->text() == buttons[i][2]->text())
            return buttons[i][0]->text().toStdString()[0];

        // Check columns
        if (!buttons[0][i]->text().isEmpty() &&
            buttons[0][i]->text() == buttons[1][i]->text() &&
            buttons[1][i]->text() == buttons[2][i]->text())
            return buttons[0][i]->text().toStdString()[0];
    }

    // Diagonals
    if (!buttons[0][0]->text().isEmpty() &&
        buttons[0][0]->text() == buttons[1][1]->text() &&
        buttons[1][1]->text() == buttons[2][2]->text())
        return buttons[0][0]->text().toStdString()[0];

    if (!buttons[0][2]->text().isEmpty() &&
        buttons[0][2]->text() == buttons[1][1]->text() &&
        buttons[1][1]->text() == buttons[2][0]->text())
        return buttons[0][2]->text().toStdString()[0];

    return ' ';  // no winner
}

void gameWindow::on_buttonClicked(){
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (!button) return;

    int row, col;
    row=col=-1;

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            if(buttons[i][j]==button){
                row=i;
                col=j;
                break;
            }
        }
    }

    if (!buttons[row][col]->text().isEmpty())
        return;

    switch (gameMode) {
        case GameMode::PlayerVsAI :{ // AI mode
            if (xTurn) {
               button->setText("X");
               char winner=getWinner();
               if (winner != ' ') {
                   handleWin(winner);
                   return;
               } else if (isBoardFull()) {
                   handleDraw();
                  return;
                }
                xTurn = false;
                makeAiMove();
            }
        }break;
        case GameMode::PlayerVsPlayer : {  // Two-player mode
            button->setText(xTurn ? "X" : "O");
            char winner=getWinner();
                if (winner != ' ') {
                    handleWin(winner);
                }else if (isBoardFull()) {
                    handleDraw();
                }else {
                    xTurn = !xTurn;
                }
        }break;
    }
}

bool gameWindow::isBoardFull() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (buttons[i][j]->text().isEmpty())
                return false;
    return true;
}

void gameWindow::handleDraw() {
    QMessageBox* msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("Game Over");
    msgBox->setText("It's a draw!");
    msgBox->setIcon(QMessageBox::Information);

    msgBox->setAttribute(Qt::WA_DeleteOnClose);
    msgBox->setStandardButtons(QMessageBox::NoButton);

    msgBox->show();

    QTimer::singleShot(2000, msgBox, &QMessageBox::accept);
    QTimer::singleShot(2000, this, [=]() {
        resetGame(xTurn);
    });
}

void gameWindow::handleWin(char winner) {
    QMessageBox* msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("Game Over");
    msgBox->setText(winner == 'X' ? "Player X wins!" : "Player O wins!");
    msgBox->setIcon(QMessageBox::Information);

    msgBox->setAttribute(Qt::WA_DeleteOnClose);
    msgBox->setStandardButtons(QMessageBox::NoButton);

    // Update scores
    if (winner == 'X') {
        ui->LeftSidePoint->setText(QString::number(ui->LeftSidePoint->text().toInt() + 1));
    } else {
        ui->RightSidePoint->setText(QString::number(ui->RightSidePoint->text().toInt() + 1));
    }

    msgBox->show();

    bool flag = (winner == 'X');

    QTimer::singleShot(2000, msgBox, &QMessageBox::accept);
    QTimer::singleShot(2000, this, [=]() {
        resetGame(flag);
    });
}

void gameWindow::resetGame(bool flag) {
    // Clear the board
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) {
            buttons[i][j]->setText("");
            buttons[i][j]->setEnabled(true);
        }
    // Set turn to the winner
    xTurn = flag;

    // If playing against AI and AI should start first
    if (gameMode == GameMode::PlayerVsAI && !xTurn) {
        makeAiMove();
    }
}

int gameWindow::evaluate() {
    char winner = getWinner();

    if (winner == 'X') {
        return -10;   // AI is 'O', so 'X' winning is bad for AI
    } else if (winner == 'O') {
        return +10;   // AI 'O' wins → good for AI
    } else if (isBoardFull()) {
        return 0;     // Draw
    }
    return 0;         // No winner yet, game continues
}

int gameWindow::minimax(int depth, bool isMaximizing, int alpha, int beta){
    int score=evaluate();
    if (score == 10 || score == -10) {
        return score;
    }
    if (isBoardFull()) {
        return 0; // draw
    }
    if(isMaximizing){
        int maxEval = -1000; // start with very low
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(buttons[i][j]->text().isEmpty()){
                    buttons[i][j]->setText("O");
                    int eval = minimax(depth + 1, false, alpha, beta);
                    buttons[i][j]->setText("");

                    maxEval=std::max(maxEval, eval);
                    alpha=std::max(alpha, eval);

                    if(beta <= alpha)
                        break;
                }
            }
        }
        return maxEval;
    }
    else{
        int minEval=1000;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(buttons[i][j]->text().isEmpty()){
                    buttons[i][j]->setText("X");
                    int eval=minimax(depth+1, true, alpha, beta);
                    buttons[i][j]->setText("");


                    minEval=std::min(minEval,eval);
                    beta=std::min(beta,eval);

                    if(beta <= alpha)
                        break;

                }
            }
        }
        return minEval;
    }
}

void gameWindow::makeAiMove(){
    int bestScore=-1000;
    int bestRow = -1;
    int bestCol = -1;
        for(int i=0; i<3; i++){
            for (int j=0; j<3; ++j) {
                if (buttons[i][j]->text().isEmpty()){
                    buttons[i][j]->setText("O");
                    int score=minimax(0, false, -1000, 1000);
                    buttons[i][j]->setText("");

                    if (score > bestScore) {
                        bestScore = score;
                        bestRow = i;
                        bestCol = j;
                }
            }
        }
    }
    if (bestRow != -1 && bestCol != -1) {
        buttons[bestRow][bestCol]->setText("O");
    }
    char winner = getWinner();
    if (winner != ' ') {
        handleWin(winner);
    } else if (isBoardFull()) {
        handleDraw();
    } else {
        xTurn = true;  // Back to player
    }
}
