#ifndef KATASTASI_H
#define KATASTASI_H

#include <QDialog>
#include <iostream>
#include <vector>


using namespace std;

namespace Ui {
class Katastasi;
}

class Katastasi : public QDialog
{
    Q_OBJECT

public:
    explicit Katastasi(QString dataset,QWidget *parent = nullptr);
    ~Katastasi();
    vector< vector <string> >   CSV_DATA;
    string CSV_FILE ;
    string onoma = "";
private slots:
    void on_categories_currentIndexChanged(const QString &arg1);
    int highlight_date(string csv_data);
    void on_search_clicked();

    void on_printer_clicked();


    void on_pushButton_clicked();

private:
    Ui::Katastasi *ui;
};

#endif // KATASTASI_H
