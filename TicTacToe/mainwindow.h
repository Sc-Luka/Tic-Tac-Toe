#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void centerWindow();
private slots:
    void on_Play1vs1_clicked();

    void on_PlaywithAi_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
