#ifndef EXAGOGI_H
#define EXAGOGI_H

#include <QDialog>
#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <sstream>
#include <cstring>
#include <string>
#include <regex>
#include <iomanip>
#include <ios>

#include <ctime>

#include <QDebug>
using namespace std;
namespace Ui {
class Exagogi;
}

class Exagogi : public QDialog
{
    Q_OBJECT

public:
    explicit Exagogi(QString dataset,QWidget *parent = nullptr);
    ~Exagogi();
    vector< vector <string> >   CSV_DATA;
    vector<int> date_extract(string date_str);
    vector<int> get_current_date(void);
    string CSV_FILE ;


private slots:
    void on_pushButton_clicked();
    int highlight_date(string csv_data);

    void on_pushButton_2_clicked();

private:
    Ui::Exagogi *ui;
    vector<vector<string>> loading(string filename);
    void hide_list(void);
};

#endif // EXAGOGI_H
