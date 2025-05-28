/********************************************************************************
** Form generated from reading UI file 'gameWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameWindow
{
public:
    QPushButton *Restart;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn20;
    QPushButton *btn11;
    QPushButton *btn21;
    QPushButton *btn12;
    QPushButton *btn22;
    QPushButton *btn00;
    QPushButton *btn10;
    QPushButton *btn02;
    QPushButton *btn01;
    QPushButton *Back;
    QLineEdit *GameModeText;
    QLineEdit *LeftSidePoint;
    QLineEdit *RightSidePoint;

    void setupUi(QWidget *gameWindow)
    {
        if (gameWindow->objectName().isEmpty())
            gameWindow->setObjectName(QString::fromUtf8("gameWindow"));
        gameWindow->resize(760, 530);
        Restart = new QPushButton(gameWindow);
        Restart->setObjectName(QString::fromUtf8("Restart"));
        Restart->setGeometry(QRect(620, 450, 90, 25));
        gridLayoutWidget = new QWidget(gameWindow);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(160, 100, 412, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(25);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn20 = new QPushButton(gridLayoutWidget);
        btn20->setObjectName(QString::fromUtf8("btn20"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn20->sizePolicy().hasHeightForWidth());
        btn20->setSizePolicy(sizePolicy);
        btn20->setMinimumSize(QSize(0, 0));
        btn20->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        btn20->setFont(font);
        btn20->setCursor(QCursor(Qt::CrossCursor));
        btn20->setAutoFillBackground(true);

        gridLayout->addWidget(btn20, 2, 0, 1, 1);

        btn11 = new QPushButton(gridLayoutWidget);
        btn11->setObjectName(QString::fromUtf8("btn11"));
        sizePolicy.setHeightForWidth(btn11->sizePolicy().hasHeightForWidth());
        btn11->setSizePolicy(sizePolicy);
        btn11->setMinimumSize(QSize(0, 0));
        btn11->setBaseSize(QSize(0, 0));
        btn11->setFont(font);
        btn11->setCursor(QCursor(Qt::CrossCursor));
        btn11->setAutoFillBackground(true);

        gridLayout->addWidget(btn11, 1, 1, 1, 1);

        btn21 = new QPushButton(gridLayoutWidget);
        btn21->setObjectName(QString::fromUtf8("btn21"));
        sizePolicy.setHeightForWidth(btn21->sizePolicy().hasHeightForWidth());
        btn21->setSizePolicy(sizePolicy);
        btn21->setMinimumSize(QSize(0, 0));
        btn21->setBaseSize(QSize(0, 0));
        btn21->setFont(font);
        btn21->setCursor(QCursor(Qt::CrossCursor));
        btn21->setAutoFillBackground(true);

        gridLayout->addWidget(btn21, 2, 1, 1, 1);

        btn12 = new QPushButton(gridLayoutWidget);
        btn12->setObjectName(QString::fromUtf8("btn12"));
        sizePolicy.setHeightForWidth(btn12->sizePolicy().hasHeightForWidth());
        btn12->setSizePolicy(sizePolicy);
        btn12->setMinimumSize(QSize(0, 0));
        btn12->setBaseSize(QSize(0, 0));
        btn12->setFont(font);
        btn12->setCursor(QCursor(Qt::CrossCursor));
        btn12->setAutoFillBackground(true);

        gridLayout->addWidget(btn12, 1, 2, 1, 1);

        btn22 = new QPushButton(gridLayoutWidget);
        btn22->setObjectName(QString::fromUtf8("btn22"));
        sizePolicy.setHeightForWidth(btn22->sizePolicy().hasHeightForWidth());
        btn22->setSizePolicy(sizePolicy);
        btn22->setMinimumSize(QSize(0, 0));
        btn22->setBaseSize(QSize(0, 0));
        btn22->setFont(font);
        btn22->setCursor(QCursor(Qt::CrossCursor));
        btn22->setAutoFillBackground(true);

        gridLayout->addWidget(btn22, 2, 2, 1, 1);

        btn00 = new QPushButton(gridLayoutWidget);
        btn00->setObjectName(QString::fromUtf8("btn00"));
        sizePolicy.setHeightForWidth(btn00->sizePolicy().hasHeightForWidth());
        btn00->setSizePolicy(sizePolicy);
        btn00->setMinimumSize(QSize(0, 0));
        btn00->setBaseSize(QSize(0, 0));
        btn00->setFont(font);
        btn00->setCursor(QCursor(Qt::CrossCursor));
        btn00->setAutoFillBackground(true);

        gridLayout->addWidget(btn00, 0, 0, 1, 1);

        btn10 = new QPushButton(gridLayoutWidget);
        btn10->setObjectName(QString::fromUtf8("btn10"));
        sizePolicy.setHeightForWidth(btn10->sizePolicy().hasHeightForWidth());
        btn10->setSizePolicy(sizePolicy);
        btn10->setMinimumSize(QSize(0, 0));
        btn10->setBaseSize(QSize(0, 0));
        btn10->setFont(font);
        btn10->setCursor(QCursor(Qt::CrossCursor));
        btn10->setAutoFillBackground(true);

        gridLayout->addWidget(btn10, 1, 0, 1, 1);

        btn02 = new QPushButton(gridLayoutWidget);
        btn02->setObjectName(QString::fromUtf8("btn02"));
        sizePolicy.setHeightForWidth(btn02->sizePolicy().hasHeightForWidth());
        btn02->setSizePolicy(sizePolicy);
        btn02->setMinimumSize(QSize(0, 0));
        btn02->setBaseSize(QSize(0, 0));
        btn02->setFont(font);
        btn02->setCursor(QCursor(Qt::CrossCursor));
        btn02->setAutoFillBackground(true);

        gridLayout->addWidget(btn02, 0, 2, 1, 1);

        btn01 = new QPushButton(gridLayoutWidget);
        btn01->setObjectName(QString::fromUtf8("btn01"));
        sizePolicy.setHeightForWidth(btn01->sizePolicy().hasHeightForWidth());
        btn01->setSizePolicy(sizePolicy);
        btn01->setMinimumSize(QSize(0, 0));
        btn01->setBaseSize(QSize(0, 0));
        btn01->setFont(font);
        btn01->setCursor(QCursor(Qt::CrossCursor));
        btn01->setAutoFillBackground(true);

        gridLayout->addWidget(btn01, 0, 1, 1, 1);

        Back = new QPushButton(gameWindow);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(30, 450, 90, 25));
        GameModeText = new QLineEdit(gameWindow);
        GameModeText->setObjectName(QString::fromUtf8("GameModeText"));
        GameModeText->setGeometry(QRect(160, 30, 401, 51));
        QFont font1;
        font1.setPointSize(28);
        GameModeText->setFont(font1);
        GameModeText->setAlignment(Qt::AlignCenter);
        GameModeText->setReadOnly(true);
        LeftSidePoint = new QLineEdit(gameWindow);
        LeftSidePoint->setObjectName(QString::fromUtf8("LeftSidePoint"));
        LeftSidePoint->setGeometry(QRect(40, 180, 95, 55));
        QFont font2;
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setItalic(true);
        LeftSidePoint->setFont(font2);
        LeftSidePoint->setAlignment(Qt::AlignCenter);
        LeftSidePoint->setReadOnly(true);
        RightSidePoint = new QLineEdit(gameWindow);
        RightSidePoint->setObjectName(QString::fromUtf8("RightSidePoint"));
        RightSidePoint->setGeometry(QRect(620, 180, 95, 55));
        RightSidePoint->setFont(font2);
        RightSidePoint->setAlignment(Qt::AlignCenter);
        RightSidePoint->setReadOnly(true);

        retranslateUi(gameWindow);

        QMetaObject::connectSlotsByName(gameWindow);
    } // setupUi

    void retranslateUi(QWidget *gameWindow)
    {
        gameWindow->setWindowTitle(QCoreApplication::translate("gameWindow", "Form", nullptr));
        Restart->setText(QCoreApplication::translate("gameWindow", "Restart", nullptr));
        btn20->setText(QString());
        btn11->setText(QString());
        btn21->setText(QString());
        btn12->setText(QString());
        btn22->setText(QString());
        btn00->setText(QString());
        btn10->setText(QString());
        btn02->setText(QString());
        btn01->setText(QString());
        Back->setText(QCoreApplication::translate("gameWindow", "Back", nullptr));
        GameModeText->setText(QString());
        LeftSidePoint->setText(QCoreApplication::translate("gameWindow", "0", nullptr));
        RightSidePoint->setText(QCoreApplication::translate("gameWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameWindow: public Ui_gameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
