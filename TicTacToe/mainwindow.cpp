#include "mainwindow.h"
#include "gameWindow.h"
#include "gameMode.h"
#include "ui_mainwindow.h"
#include "ui_gameWindow.h"

#include <QRect>
#include <QScreen>
#include <QApplication>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(this->size());  // Fix window size to current size

    centerWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::centerWindow()
{
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->move(screenGeometry.center() - this->rect().center());
}

void MainWindow::on_Play1vs1_clicked()
{
    gameWindow *gamewindow=new gameWindow();

    gamewindow->setGameMode(GameMode::PlayerVsPlayer);

    gamewindow->setGameModeText("Local multiplayer mode");

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->availableGeometry();

    gamewindow->move(screenGeometry.center() - gamewindow->rect().center());

    gamewindow->show();
    this->hide();
}

void MainWindow::on_PlaywithAi_clicked()
{
    gameWindow *gamewindow=new gameWindow();

    gamewindow->setGameMode(GameMode::PlayerVsAI);

    gamewindow->setGameModeText("Player vs AI mode");

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->availableGeometry();

    gamewindow->move(screenGeometry.center() - gamewindow->rect().center());

    gamewindow->show();
    this->hide();

}

