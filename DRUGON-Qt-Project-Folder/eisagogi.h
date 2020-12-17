#ifndef EISAGOGI_H
#define EISAGOGI_H

#include <QDialog>

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

namespace Ui {
class Eisagogi;
}

class Eisagogi : public QDialog
{
    Q_OBJECT

public:
    explicit Eisagogi(QString dataset,QWidget *parent = nullptr);
    ~Eisagogi();
    int new_flag = 0;

    string barcode;
    string onoma;
    string mm;
    string katigoria;
    string posotita;
    string arithmos;
    string expday;
    vector<vector<string>> loading(string filename);
    void update_data(string category,string name,string mm,string posotita,string number,string expday,string barcode,int newFlag);
    string CSV_FILE ;

private slots:
    void on_new_med_clicked();
    void on_katahorisi_clicked();

    void on_category_cb_currentIndexChanged(const QString &arg1);

private:
    Ui::Eisagogi *ui;
    bool check_fields(int flag);
    int toInteger(string number);

};

#endif // EISAGOGI_H
