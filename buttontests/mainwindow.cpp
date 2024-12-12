#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , clickCount(0)
{
    ui->setupUi(this);
    ui->labelClickCount->setText("you clicked 0 times , press the button to start the challenge!");

    ui->progressBar->setRange(0, 200);
    ui->progressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if (clickCount < 200) {
    clickCount++;
    ui->labelClickCount->setText("you clicked " + QString::number(clickCount) + "times, do it! ");
    ui->progressBar->setValue(clickCount);
    }

    if (clickCount == 200) {
    ui->labelClickCount->setText(" you did it! ");
    }
}

void MainWindow::on_progressBar_valueChanged(int value)
{

}

