/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Play1vs1;
    QPushButton *PlaywithAi;
    QLineEdit *TicTacToeText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(760, 530);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-image: url(:/images/background.jpg);\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"\n"
""));
        Play1vs1 = new QPushButton(centralwidget);
        Play1vs1->setObjectName(QString::fromUtf8("Play1vs1"));
        Play1vs1->setGeometry(QRect(250, 220, 240, 31));
        QFont font;
        Play1vs1->setFont(font);
        Play1vs1->setCursor(QCursor(Qt::CrossCursor));
        Play1vs1->setAutoDefault(true);
        Play1vs1->setFlat(false);
        PlaywithAi = new QPushButton(centralwidget);
        PlaywithAi->setObjectName(QString::fromUtf8("PlaywithAi"));
        PlaywithAi->setGeometry(QRect(250, 290, 240, 31));
        PlaywithAi->setFont(font);
        PlaywithAi->setCursor(QCursor(Qt::CrossCursor));
        PlaywithAi->setAutoDefault(true);
        PlaywithAi->setFlat(false);
        TicTacToeText = new QLineEdit(centralwidget);
        TicTacToeText->setObjectName(QString::fromUtf8("TicTacToeText"));
        TicTacToeText->setGeometry(QRect(160, 30, 461, 81));
        QFont font1;
        font1.setPointSize(50);
        TicTacToeText->setFont(font1);
        TicTacToeText->setAlignment(Qt::AlignCenter);
        TicTacToeText->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 760, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Play1vs1->setDefault(false);
        PlaywithAi->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Play1vs1->setText(QCoreApplication::translate("MainWindow", "Play 1 vs 1	", nullptr));
        PlaywithAi->setText(QCoreApplication::translate("MainWindow", "Play Against AI", nullptr));
        TicTacToeText->setText(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
