#include "exagogi.h"
#include "ui_exagogi.h"
#include <QSpinBox>

Exagogi::Exagogi(QString dataset,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Exagogi)
{
    ui->setupUi(this);

    if(dataset == "ΙΑΤΡΕΙΟ"){
        CSV_FILE = "./CSV/iatreio.csv";
    }
    else if(dataset == "ΑΣΘΕΝΟΦΟΡΟ ΜΠΛΕ"){
        CSV_FILE = "./CSV/a_mple.csv";
    }
    else if(dataset == "ΑΣΘΕΝΟΦΟΡΟ ΚΟΚΚΙΝΟ"){
        CSV_FILE = "./CSV/a_kokkino.csv";
    }

    CSV_DATA = loading(CSV_FILE);


    string categories = CSV_DATA[0][0];







    for(int i = 0; i < CSV_DATA.size(); i++){


        QLabel *name = new QLabel(this);
        string line = CSV_DATA[i][1];

        name->setText(QString::fromStdString(line));
        ui->medicine->addWidget(name);

        QLabel *mmvar = new QLabel(this);  // Create a dynamic button object
        line = CSV_DATA[i][2];

        mmvar->setText(QString::fromStdString(line));
        ui->mm->addWidget(mmvar);


        QSpinBox *pos = new QSpinBox(this);  // Create a dynamic button object
        line = CSV_DATA[i][3];

        pos->setRange(0,QString::fromStdString(line).toInt());
        pos->setValue(QString::fromStdString(line).toInt());

        ui->posotita->addWidget(pos);


        QLabel *ari = new QLabel(this);  // Create a dynamic button object
        line = CSV_DATA[i][4];

        ari->setText(QString::fromStdString(line));
        ui->arithmos->addWidget(ari);

        QLabel *exp = new QLabel(this);  // Create a dynamic button object
        line = CSV_DATA[i][5];


        exp->setText(QString::fromStdString(line));

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

        ui->expday->addWidget(exp);



    }

    hide_list();

}

Exagogi::~Exagogi()
{
    delete ui;
}

void Exagogi::hide_list(void){
    for(int i = 0; i < ui->medicine->count(); i++){
        QLabel *name = qobject_cast<QLabel*>(ui->medicine->itemAt(i)->widget());
        QLabel *mmvar = qobject_cast<QLabel*>(ui->mm->itemAt(i)->widget());
        QSpinBox *pos = qobject_cast<QSpinBox*>(ui->posotita->itemAt(i)->widget());
        QLabel *ari = qobject_cast<QLabel*>(ui->arithmos->itemAt(i)->widget());
        QLabel *exp = qobject_cast<QLabel*>(ui->expday->itemAt(i)->widget());

        name->hide();
        mmvar->hide();
        pos->hide();
        ari->hide();
        exp->hide();
    }
}

vector<vector<string>> Exagogi::loading(string filename){



    vector <vector <string> > data;
    ifstream infile(filename);

    while (infile){
        string s;
        if (!getline( infile, s )) break;

        istringstream ss( s );
        vector <string> record;

        while (ss)
        {
        string s;
        if (!getline( ss, s, ';' )) break;
        record.push_back( s );
        }

        data.push_back( record );



    }

    if (!infile.eof()){
        cerr << "ERROR FILE NOT FOUND!\n";
    }

    return data;

}

void Exagogi::on_pushButton_clicked()
{
   string search = ui->barcode->text().toStdString();

   for(int i = 0; i < ui->medicine->count(); i++){
       QLabel *name = qobject_cast<QLabel*>(ui->medicine->itemAt(i)->widget());
       QLabel *mmvar = qobject_cast<QLabel*>(ui->mm->itemAt(i)->widget());
       QSpinBox *pos = qobject_cast<QSpinBox*>(ui->posotita->itemAt(i)->widget());
       QLabel *ari = qobject_cast<QLabel*>(ui->arithmos->itemAt(i)->widget());
       QLabel *exp = qobject_cast<QLabel*>(ui->expday->itemAt(i)->widget());

       if(search == CSV_DATA[i][6]){
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

vector<int> Exagogi::date_extract(string date_str){

    vector<int> date;
    string var = "";
    int num;

    for(int i = 0; i < date_str.size(); i++){
        if(date_str[i] != '/' && i != date_str.size() - 1 ){
            var += date_str[i];
        }
        else if(date_str[i] == '/' || i == date_str.size() - 1){
            if( i == date_str.size() - 1){
                var += date_str[i];
            }
            stringstream toInt(var);
            toInt >> num;

            date.push_back(num);
            var = "";
        }
    }

    return date;

}

vector<int> Exagogi::get_current_date(void){
    vector<int> date;


    // current date/time based on current system
    time_t now = time(0);
    tm *ltm = localtime(&now);

    date.push_back(ltm->tm_mday);
    date.push_back(1+ltm->tm_mon);
    date.push_back(1900 + ltm->tm_year);

    return date;
}


int Exagogi::highlight_date(string csv_data){
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

void Exagogi::on_pushButton_2_clicked()
{

    vector< vector <string> >   csv  = loading(CSV_FILE);

    ifstream ClearFile;
    string filepath = CSV_FILE;
    ClearFile.open(filepath.c_str(), ifstream::out | ifstream::trunc );
    ClearFile.close();

    ofstream new_csv(CSV_FILE, ios_base::app | ios_base::out);


    new_csv << csv[0][0]+";"+csv[0][1]+";"+csv[0][2]+";"+csv[0][3]+";"+csv[0][4]+";"+csv[0][5]+";"+csv[0][6]+";\n";

    for(int i = 0; i < ui->medicine->count(); i++){
        QSpinBox *pos = qobject_cast<QSpinBox*>(ui->posotita->itemAt(i)->widget());
        QLabel *name = qobject_cast<QLabel*>(ui->medicine->itemAt(i)->widget());
        QLabel *mmvar = qobject_cast<QLabel*>(ui->mm->itemAt(i)->widget());
        QLabel *ari = qobject_cast<QLabel*>(ui->arithmos->itemAt(i)->widget());
        QLabel *exp = qobject_cast<QLabel*>(ui->expday->itemAt(i)->widget());

        if(pos->text() != "0"){
            new_csv << csv[i][0]+";"+csv[i][1]+";"+csv[i][2]+";"+pos->text().toStdString()+";"+csv[i][4]+";"+csv[i][5]+";"+csv[i][6]+";\n";
            pos->setRange(0,pos->text().toInt());
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
