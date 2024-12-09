#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"logindialog.h"
#include"registerdialog.h"
/**************************************************************
 * @file mainwindow.h
 * @class QMainWindow
 * @brief 主窗口
 *
 * @author yolopg
 * @note
 *
 * @version 1.0
 * @date 2024/12/09
 **************************************************************/

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

private:
    Ui::MainWindow *ui;
    LoginDialog*_login_dlg;
    RegisterDialog*_register_dlg;
private slots:
    void SlotSwitchRegDialog();
};
#endif // MAINWINDOW_H
