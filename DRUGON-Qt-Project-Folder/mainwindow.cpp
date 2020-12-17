#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPixmap>
#include <katastasi.h>
#include <eisagogi.h>
#include <exagogi.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);

    QPixmap pix2("./IMAGES/heal.png");
    ui->pharmacy->setPixmap(pix2.scaled(200,200,Qt::KeepAspectRatio));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Katastasi katastasi(ui->comboBox->currentText());
    katastasi.setWindowFlags(katastasi.windowFlags() & ~Qt::WindowContextHelpButtonHint);
    katastasi.setWindowFlags(katastasi.windowFlags() | Qt::WindowMinimizeButtonHint);
    katastasi.setWindowFlags(katastasi.windowFlags() | Qt::WindowMaximizeButtonHint);
    katastasi.setModal(true);
    katastasi.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    Eisagogi eisagogi(ui->comboBox->currentText());
    eisagogi.setWindowFlags(eisagogi.windowFlags() & ~Qt::WindowContextHelpButtonHint);
    eisagogi.setWindowFlags(eisagogi.windowFlags() | Qt::WindowMinimizeButtonHint);
    eisagogi.setWindowFlags(eisagogi.windowFlags() | Qt::WindowMaximizeButtonHint);
    eisagogi.setModal(true);
    eisagogi.exec();

}

void MainWindow::on_pushButton_3_clicked()
{
    Exagogi exagogi(ui->comboBox->currentText());
    exagogi.setWindowFlags(exagogi.windowFlags() & ~Qt::WindowContextHelpButtonHint);
    exagogi.setWindowFlags(exagogi.windowFlags() | Qt::WindowMinimizeButtonHint);
    exagogi.setWindowFlags(exagogi.windowFlags() | Qt::WindowMaximizeButtonHint);
    exagogi.setModal(true);
    exagogi.exec();
}
