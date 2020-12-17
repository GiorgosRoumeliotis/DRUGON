#include "eisagogi.h"
#include "ui_eisagogi.h"
#include "mainwindow.h"
#include <QDebug>

Eisagogi::Eisagogi(QString dataset,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Eisagogi)
{

    if(dataset == "ΙΑΤΡΕΙΟ"){
        CSV_FILE = "./CSV/iatreio.csv";
    }
    else if(dataset == "ΑΣΘΕΝΟΦΟΡΟ ΜΠΛΕ"){
        CSV_FILE = "./CSV/a_mple.csv";
    }
    else if(dataset == "ΑΣΘΕΝΟΦΟΡΟ ΚΟΚΚΙΝΟ"){
        CSV_FILE = "./CSV/a_kokkino.csv";
    }

    vector<vector <string>> category = loading(CSV_FILE);


    ui->setupUi(this);
    ui->message->hide();
    ui->onoma->hide();
    ui->mm->hide();



    string categories = category[0][0];


    for(int i = 0; i < category.size(); i++){
        if(category[i][0] != categories){
            categories = category[i][0];
            ui->category_cb->addItem(QString::fromStdString(categories));
        }
    }

    ui->category_cb->addItem("Νέα *");
    ui->katigoria->hide();
    ui->category_cb->hide();
    ui->arithmos->hide();
    ui->arithmos_label->hide();
}

Eisagogi::~Eisagogi()
{
    delete ui;
}


void Eisagogi::on_new_med_clicked()
{

    if(ui->category_cb->currentText() != "Νέα *"){
        ui->katigoria->hide();
    }
    else{
        ui->katigoria->show();
    }

    if (new_flag == 0) {
        new_flag = 1;
        ui->onoma->show();
        ui->mm->show();
        ui->category_cb->show();
        ui->arithmos_label->show();
        ui->arithmos->show();
        ui->new_med->setText("Άκυρο");
    }
    else if (new_flag == 1){
        new_flag = 0;
        ui->new_med->setText("Νέο *");
        ui->onoma->hide();
        ui->mm->hide();
        ui->katigoria->hide();
        ui->arithmos->hide();
        ui->arithmos_label->hide();
        ui->category_cb->hide();
    }
}

void Eisagogi::on_katahorisi_clicked()
{
    if(check_fields(new_flag)){
        ui->message->hide();

        if(new_flag == 1){
            barcode = ui->barcode->text().toStdString();
            onoma = ui->onoma->text().toStdString();
            mm = ui->mm->text().toStdString();

            if(ui->category_cb->currentText() == "Νέα *"){
                katigoria = ui->katigoria->text().toStdString();
            }
            else{
                katigoria = ui->category_cb->currentText().toStdString();
            }

            posotita = ui->posotita->text().toStdString();
            arithmos = ui->arithmos->text().toStdString();
            expday = ui->expday->text().toStdString();

            update_data(katigoria,onoma,mm,posotita,arithmos,expday,barcode,new_flag);

            ui->barcode->setText("");
            ui->onoma->setText("");
            ui->mm->setText("");
            ui->katigoria->setText("");
        }
        else if(new_flag == 0){
            barcode = ui->barcode->text().toStdString();
            posotita = ui->posotita->text().toStdString();
            expday = ui->expday->text().toStdString();


            ui->barcode->setText("");

            vector<vector <string>> CSV_DATA = loading(CSV_FILE);

            for(int i = 0; i < CSV_DATA.size(); i++){
                if(barcode == CSV_DATA[i][6]){
                    katigoria = CSV_DATA[i][0];
                    onoma = CSV_DATA[i][1];
                    mm = CSV_DATA[i][2];
                    arithmos = CSV_DATA[i][4];
                    break;
                }
            }

            update_data(katigoria,onoma,mm,posotita,arithmos,expday,barcode,new_flag);
        }
    }
    else{
        ui->message->show();
    }



}


bool Eisagogi::check_fields(int flag){
    if(ui->barcode->text() == ""){
        return false;
    }
    if(flag == 1){
        if(ui->onoma->text() == ""){
            return false;
        }
        if(ui->mm->text() == ""){
            return false;
        }
        if(ui->katigoria->text() == "" && ui->category_cb->currentText() == "Νέα *"){
            return false;
        }
    }
    return true;
}


void Eisagogi:: update_data(string category,string name,string mm,string posotita,string number,string expday,string barcode, int newFlag){

    vector<vector <string>> CSV_DATA = loading(CSV_FILE);

    ifstream ClearFile;
    string filepath = CSV_FILE;
    ClearFile.open(filepath.c_str(), ifstream::out | ifstream::trunc );
    ClearFile.close();

    ofstream new_csv(CSV_FILE, ios_base::app | ios_base::out);
    int katahorithike = 0;

    if(newFlag == 1){ // κατχωριση καινουργιου φαρμάκου



        for(int i = 0;i < CSV_DATA.size(); i++){

            new_csv << CSV_DATA[i][0]+";"+CSV_DATA[i][1]+";"+CSV_DATA[i][2]+";"+CSV_DATA[i][3]+";"+CSV_DATA[i][4]+";"+CSV_DATA[i][5]+";"+CSV_DATA[i][6]+";\n";

            if(category == CSV_DATA[i][0] && katahorithike == 0){
               new_csv << category+";"+name+";"+mm+";"+posotita+";"+number+";"+expday+";"+barcode+";\n";
               katahorithike = 1;
            }
            else if(i == CSV_DATA.size() - 1 && katahorithike == 0){
                new_csv << category+";"+name+";"+mm+";"+posotita+";"+number+";"+expday+";"+barcode+";\n";
                katahorithike = 1;
            }

        }

        new_csv.close();
    }
    else if(newFlag == 0){

        bool parse = false;
        bool bar_found = false;


        for(int i = 0; i < CSV_DATA.size(); i++){

            if(barcode == CSV_DATA[i][6]){
                bar_found = true;
                if(expday == CSV_DATA[i][5]){
                    CSV_DATA[i][3] = to_string(toInteger(CSV_DATA[i][3]) + toInteger(posotita));
                    new_csv << CSV_DATA[i][0]+";"+CSV_DATA[i][1]+";"+CSV_DATA[i][2]+";"+CSV_DATA[i][3]+";"+CSV_DATA[i][4]+";"+CSV_DATA[i][5]+";"+CSV_DATA[i][6]+";\n";
                    parse = true;
                }
                else if(i == CSV_DATA.size() - 1 && !parse){
                    new_csv << CSV_DATA[i][0]+";"+CSV_DATA[i][1]+";"+CSV_DATA[i][2]+";"+CSV_DATA[i][3]+";"+CSV_DATA[i][4]+";"+CSV_DATA[i][5]+";"+CSV_DATA[i][6]+";\n";
                    new_csv << category+";"+name+";"+mm+";"+posotita+";"+number+";"+expday+";"+barcode+";\n";
                }
                else{
                    new_csv << CSV_DATA[i][0]+";"+CSV_DATA[i][1]+";"+CSV_DATA[i][2]+";"+CSV_DATA[i][3]+";"+CSV_DATA[i][4]+";"+CSV_DATA[i][5]+";"+CSV_DATA[i][6]+";\n";
                }
            }
            else{
                if(bar_found && !parse){
                    new_csv << category+";"+name+";"+mm+";"+posotita+";"+number+";"+expday+";"+barcode+";\n";
                    parse = true;
                }
                new_csv << CSV_DATA[i][0]+";"+CSV_DATA[i][1]+";"+CSV_DATA[i][2]+";"+CSV_DATA[i][3]+";"+CSV_DATA[i][4]+";"+CSV_DATA[i][5]+";"+CSV_DATA[i][6]+";\n";
            }
        }
    }

}

vector<vector<string>> Eisagogi::loading(string filename){



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

int Eisagogi::toInteger(string number){
    int integer;
    stringstream toInt(number);
    toInt >> integer;
    return integer;
}


void Eisagogi::on_category_cb_currentIndexChanged(const QString &arg1)
{
    if(arg1 == "Νέα *"){
        ui->katigoria->show();
    }
    else{
        ui->katigoria->hide();
    }
}
