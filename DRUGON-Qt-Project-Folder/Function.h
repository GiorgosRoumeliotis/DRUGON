#ifndef FUNCTION_H
#define FUNCTION_H

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

vector<vector<string>> loading(string filename){



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


bool dynamic_search(string str, regex reg){
    sregex_iterator currentMatch(str.begin(), str.end() , reg);
    sregex_iterator lastMatch;
    if(currentMatch != lastMatch){
        currentMatch++;
        return true;
    }
    else{
        return false;
    }
}

vector<int> date_extract(string date_str){

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

vector<vector<string>> date_short(vector <vector <string> > csv_data){



    string temp_katastasi = "";
    string temp_onoma = "";
    string temp_mm = "";
    string temp_poso = "";
    string temp_arithmos = "";
    string temp_date = "";
    string temp_barcode = "";


    for(int i = 0; i < csv_data.size() - 1; i++){
        for(int j = 0; j < csv_data.size() - i - 1; j++){
            if( date_extract(csv_data[j][5])[2] > date_extract(csv_data[j+1][5])[2]){


                temp_katastasi = csv_data[j][0];
                csv_data[j][0] = csv_data[j+1][0];
                csv_data[j+1][0] = temp_katastasi;

                temp_onoma = csv_data[j][1];
                csv_data[j][1] = csv_data[j+1][1];
                csv_data[j+1][1] = temp_onoma;

                temp_mm = csv_data[j][2];
                csv_data[j][2] = csv_data[j+1][2];
                csv_data[j+1][2] = temp_mm;

                temp_poso = csv_data[j][3];
                csv_data[j][3] = csv_data[j+1][3];
                csv_data[j+1][3] = temp_poso;

                temp_arithmos = csv_data[j][4];
                csv_data[j][4] = csv_data[j+1][4];
                csv_data[j+1][4] = temp_arithmos;

                temp_date = csv_data[j][5];
                csv_data[j][5] = csv_data[j+1][5];
                csv_data[j+1][5] = temp_date;

                temp_barcode = csv_data[j][6];
                csv_data[j][6] = csv_data[j+1][6];
                csv_data[j+1][6] = temp_barcode;



            }
            if(date_extract(csv_data[j][5])[2] == date_extract(csv_data[j+1][5])[2]){
                if(date_extract(csv_data[j][5])[1] > date_extract(csv_data[j+1][5])[1]){


                    temp_katastasi = csv_data[j][0];
                    csv_data[j][0] = csv_data[j+1][0];
                    csv_data[j+1][0] = temp_katastasi;

                    temp_onoma = csv_data[j][1];
                    csv_data[j][1] = csv_data[j+1][1];
                    csv_data[j+1][1] = temp_onoma;

                    temp_mm = csv_data[j][2];
                    csv_data[j][2] = csv_data[j+1][2];
                    csv_data[j+1][2] = temp_mm;

                    temp_poso = csv_data[j][3];
                    csv_data[j][3] = csv_data[j+1][3];
                    csv_data[j+1][3] = temp_poso;

                    temp_arithmos = csv_data[j][4];
                    csv_data[j][4] = csv_data[j+1][4];
                    csv_data[j+1][4] = temp_arithmos;

                    temp_date = csv_data[j][5];
                    csv_data[j][5] = csv_data[j+1][5];
                    csv_data[j+1][5] = temp_date;

                    temp_barcode = csv_data[j][6];
                    csv_data[j][6] = csv_data[j+1][6];
                    csv_data[j+1][6] = temp_barcode;
                }
            }
        }
    }

    return csv_data;
}


vector<vector<string>> alphabetic_short(vector <vector <string> > csv_data){



    string temp_katastasi = "";
    string temp_onoma = "";
    string temp_mm = "";
    string temp_poso = "";
    string temp_arithmos = "";
    string temp_date = "";

    for(int i = 0; i < csv_data.size() - 1; i++){
        for(int j = 0; j < csv_data.size() - i - 1; j++){
            if( csv_data[j][1] > csv_data[j+1][1]){


                temp_katastasi = csv_data[j][0];
                csv_data[j][0] = csv_data[j+1][0];
                csv_data[j+1][0] = temp_katastasi;

                temp_onoma = csv_data[j][1];
                csv_data[j][1] = csv_data[j+1][1];
                csv_data[j+1][1] = temp_onoma;

                temp_mm = csv_data[j][2];
                csv_data[j][2] = csv_data[j+1][2];
                csv_data[j+1][2] = temp_mm;

                temp_poso = csv_data[j][3];
                csv_data[j][3] = csv_data[j+1][3];
                csv_data[j+1][3] = temp_poso;

                temp_arithmos = csv_data[j][4];
                csv_data[j][4] = csv_data[j+1][4];
                csv_data[j+1][4] = temp_arithmos;

                temp_date = csv_data[j][5];
                csv_data[j][5] = csv_data[j+1][5];
                csv_data[j+1][5] = temp_date;




            }
        }
    }

    return csv_data;
}

vector<int> get_current_date(void){
    vector<int> date;


    // current date/time based on current system
    time_t now = time(0);
    tm *ltm = localtime(&now);

    date.push_back(ltm->tm_mday);
    date.push_back(1+ltm->tm_mon);
    date.push_back(1900 + ltm->tm_year);

    return date;
}


int greek_char_count(string line){
    int characters = 0;
    int flag = 0;

    for(int i = 0; i < line.size() ; i++){
        if((int) line[i] < 0){
            flag++;
            if(flag == 2){
                flag = 0;

                characters++;
            }
        }
        else{
            characters++;
        }
    }

    return  characters;
}

string space_add(int spaces, int need){
    string space = "";
    for(int i = 0; i < need - spaces;  i++){
        space += " ";
    }
    return space;
}


void format_data_for_printing(vector<vector <string>> line , string onoma){

    vector<int> date = get_current_date();

    string day = "";
    string month = "";
    string year = "";
    string all_date = "";

    if(to_string(date[0]).size() == 1){
        day = "0" + to_string(date[0]);
    }
    else{
        day = to_string(date[0]);
    }

    if(to_string(date[1]).size() == 1){
        month = "0" + to_string(date[1]);
    }
    else{
        month = to_string(date[1]);
    }

    if(to_string(date[2]).size() == 1){
        year = "0" + to_string(date[2]);
    }
    else{
        year = to_string(date[2]);
    }

    all_date = day + "/" + month + "/" + year;

    ifstream ClearFile;
    string filepath ="../BackUp/"+ onoma + to_string(date[0])+"-"+to_string(date[1])+"-"+to_string(date[2])+".txt";
    ClearFile.open(filepath.c_str(), ifstream::out | ifstream::trunc );
    ClearFile.close();

    ofstream printing_data(filepath, ios_base::app | ios_base::out);

    string  category = line[0][0];

    printing_data << "+----------------------------------------------------------------------------+\n";
    printing_data << "|                          ΑΠΟΘΗΚΗ ΦΑΡΜΑΚΩΝ  " + all_date + "                      |\n";
    printing_data << "|----------------------------------------------+--+--------+-------+---------|\n";
    printing_data << "|                     ONOMA                    |ΜΜ|ΠΟΣΟΤΗΤΑ|ΑΡΙΘΜΟΣ|ΗΜ. ΛΗΞΗΣ|\n";
    printing_data << "|----------------------------------------------+--+--------+-------+---------|\n";



    for(int i = 1; i < line.size(); i++){
        if(category != line[i][0]){
            printing_data << "+----------------------------------------------------------------------------+\n\n";
            printing_data << "                          " + line[i][0] ;
            printing_data << "\n\n";
            printing_data << "+----------------------------------------------------------------------------+\n";
            printing_data << "+----------------------------------------------------------------------------+\n";


            category = line[i][0];
        }
        printing_data << "|" + line[i][1] + space_add(greek_char_count(line[i][1]),46) + "|" +
                line[i][2] + space_add(greek_char_count(line[i][2]),2) + "|" +
                line[i][3] + space_add(greek_char_count(line[i][3]),8) + "|" +
                line[i][4] + space_add(greek_char_count(line[i][4]),7) + "|" +
                line[i][5] + space_add(greek_char_count(line[i][5]),9) + "|\n" ;
        printing_data << "|----------------------------------------------|--|--------|-------|---------|\n";

    }

    printing_data << "+----------------------------------------------------------------------------+\n";

    printing_data.close();
}

#endif // FUNCTION_H
