#include "katastasi.h"
#include "ui_katastasi.h"
#include <QFile>
#include <QStringList>
#include <QDebug>
#include <QLabel>
#include <QtGui>
#include <QtCore>
#include <QFileDialog>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextDocument>
#include <Function.h>


Katastasi::Katastasi(QString dataset, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Katastasi)
{
    ui->setupUi(this);
    ui->printer->hide();
    ui->ok->hide();


    if(dataset == "ΙΑΤΡΕΙΟ"){
        CSV_FILE = "./CSV/iatreio.csv";
        onoma = "IATREIO-";
    }
    else if(dataset == "ΑΣΘΕΝΟΦΟΡΟ ΜΠΛΕ"){
        CSV_FILE = "./CSV/a_mple.csv";
        onoma = "ASTHENOFORO_MPLE-";
    }
    else if(dataset == "ΑΣΘΕΝΟΦΟΡΟ ΚΟΚΚΙΝΟ"){
        CSV_FILE = "./CSV/a_kokkino.csv";
        onoma = "ASTHENOFORO_KOKKINO-";
    }

    CSV_DATA = loading(CSV_FILE);


    string categories = CSV_DATA[0][0];

    ui->categories->addItem(QString::fromStdString(CSV_DATA[0][0]));

    for(int i = 0; i < CSV_DATA.size(); i++){
        if(CSV_DATA[i][0] != categories){
            categories = CSV_DATA[i][0];
            ui->categories->addItem(QString::fromStdString(categories));
        }
    }

    CSV_DATA = date_short(CSV_DATA);
//    CSV_DATA = alphabetic_short(CSV_DATA);





    for(int i = 0; i < CSV_DATA.size(); i++){

        QLabel *name = new QLabel(this);
        string line = CSV_DATA[i][1];

        name->setText(QString::fromStdString(line));
        ui->medicine->addWidget(name);

        QLabel *mmvar = new QLabel(this);  // Create a dynamic button object
        line = CSV_DATA[i][2];

        mmvar->setText(QString::fromStdString(line));
        ui->mm->addWidget(mmvar);


        QLabel *pos = new QLabel(this);  // Create a dynamic button object
        line = CSV_DATA[i][3];

        pos->setText(QString::fromStdString(line));
        ui->posotita->addWidget(pos);


        QLabel *ari = new QLabel(this);  // Create a dynamic button object
        line = CSV_DATA[i][4];

        ari->setText(QString::fromStdString(line));
        ui->arithmos->addWidget(ari);

        QLabel *exp = new QLabel(this);  // Create a dynamic button object
        line = CSV_DATA[i][5];


        if(highlight_date(CSV_DATA[i][5]) == 1){
            exp->setStyleSheet("color:orange;");
        }
        else if(highlight_date(CSV_DATA[i][5]) == 2){
            exp->setStyleSheet("color:red;");
        }
        else{
            exp->setStyleSheet("color:green;");
        }
        exp->setText(QString::fromStdString(line));
        ui->expday->addWidget(exp);

    }

}

Katastasi::~Katastasi()
{
    delete ui;
}

void Katastasi::on_categories_currentIndexChanged(const QString &arg1)
{

    for(int i = 0; i < ui->medicine->count(); i++){
        QLabel *name = qobject_cast<QLabel*>(ui->medicine->itemAt(i)->widget());
        QLabel *mmvar = qobject_cast<QLabel*>(ui->mm->itemAt(i)->widget());
        QLabel *pos = qobject_cast<QLabel*>(ui->posotita->itemAt(i)->widget());
        QLabel *ari = qobject_cast<QLabel*>(ui->arithmos->itemAt(i)->widget());
        QLabel *exp = qobject_cast<QLabel*>(ui->expday->itemAt(i)->widget());

        if(arg1.toStdString() == "ΟΛΑ"){
            name->show();
            mmvar->show();
            pos->show();
            ari->show();
            exp->show();
        }
        else if(CSV_DATA[i][0] == arg1.toStdString()){
           name->show();
           mmvar->show();
           pos->show();
           ari->show();
           exp->show();
       }
       else{
           name->hide();
           mmvar->hide();
           pos->hide();
           ari->hide();
           exp->hide();
       }



    }
}

void Katastasi::on_search_clicked()
{
    smatch matches;
    string item = ui->s_line->text().toStdString();
    string reg = "(([A-Za-z]*)"+item+"([^ ]+)?)([A-Za-z]*)";
    regex regular(reg,regex_constants::icase);
    string med;


    for(int i = 0; i < ui->medicine->count(); i++){
        QLabel *name = qobject_cast<QLabel*>(ui->medicine->itemAt(i)->widget());
        QLabel *mmvar = qobject_cast<QLabel*>(ui->mm->itemAt(i)->widget());
        QLabel *pos = qobject_cast<QLabel*>(ui->posotita->itemAt(i)->widget());
        QLabel *ari = qobject_cast<QLabel*>(ui->arithmos->itemAt(i)->widget());
        QLabel *exp = qobject_cast<QLabel*>(ui->expday->itemAt(i)->widget());
        med = name->text().toStdString();

        if(!(dynamic_search(med,regular)) && CSV_DATA[i][6] != item && (ui->s_line->text().size() > 0)){
            name->hide();
            mmvar->hide();
            pos->hide();
            ari->hide();
            exp->hide();
        }
        else{
            name->show();
            mmvar->show();
            pos->show();
            ari->show();
            exp->show();
        }

        if(ui->s_line->text().size() == 0){
            name->show();
            mmvar->show();
            pos->show();
            ari->show();
            exp->show();
        }
    }

}


int Katastasi::highlight_date(string csv_data){
        int color = 0;
        if(csv_data != "-"){
            if(date_extract(csv_data)[2] == get_current_date()[2]){
                if(date_extract(csv_data)[1] - get_current_date()[1] < 2){
                    color = 1;
                }
                if(date_extract(csv_data)[1] - get_current_date()[1] <= 0){
                    color = 2;
                }

            }
            if(date_extract(csv_data)[2] < get_current_date()[2]){
                color = 2;
            }

        }

        return color;
}

void Katastasi::on_printer_clicked()
{}


void Katastasi::on_pushButton_clicked()
{
        format_data_for_printing(loading(CSV_FILE),onoma);
        ui->ok->show();
}
