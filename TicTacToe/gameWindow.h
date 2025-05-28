#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "gameMode.h"

#include <QWidget>
#include <QPushButton>
#include <QMainWindow>


namespace Ui {
class gameWindow;
}

class gameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit gameWindow(QWidget *parent = nullptr);
    ~gameWindow();

    void setGameModeText(const QString &text);
    void setGameMode(GameMode mode);

    void resetGame(bool flag = true);
    void handleWin(char winner);
    void handleDraw();
    void makeAiMove();

    bool isBoardFull();

    char getWinner();

    int evaluate();
    int minimax(int depth, bool isMaximazing, int alpha, int beta);
private slots:
    void on_Back_clicked();

    void on_Restart_clicked();

    void on_buttonClicked();

private:
    Ui::gameWindow *ui;
    QPushButton* buttons[3][3];

    GameMode gameMode;

    bool xTurn = true;
};

#endif // GAMEWINDOW_H
