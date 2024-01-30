#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QProcess>  //引入进程头文件
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // 创建一个 QProcess 对象
    QProcess process;

    // 设置要运行的程序（这里是cmd.exe）和参数（/c 表示执行命令并关闭窗口）
    process.start("cmd.exe", QStringList() << "/c" << "hi.bat");

    // 等待进程完成
    process.waitForFinished(-1);
}

void MainWindow::on_pushButton_2_clicked()
{
    // 创建一个 QProcess 对象
    QProcess process;

    // 设置要运行的程序（这里是cmd.exe）和参数（/c 表示执行命令并关闭窗口）
    process.start("cmd.exe", QStringList() << "/c" << "hi17.bat");

    // 等待进程完成
    process.waitForFinished(-1);
}

void MainWindow::on_pushButton_3_clicked()
{
    // 创建一个 QProcess 对象
    QProcess process;

    // 设置要运行的程序（这里是cmd.exe）和参数（/c 表示执行命令并关闭窗口）
    process.start("cmd.exe", QStringList() << "/c" << "hi20.bat");

    // 等待进程完成
    process.waitForFinished(-1);
}
