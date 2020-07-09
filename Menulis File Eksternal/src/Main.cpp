#include <iostream>
#include <fstream> // ofstream , ifstream , fstream
using namespace std;

int main(){
    ofstream myFile;

    // ios::out --> default, operasi output
    // ios::app --> menuliskan pada akhir baris
    // ios::trunc --> default, membuat file jika tidak ada kalo ada maka akan di delete

    myFile.open("data1.txt",ios::out);
    myFile <<"penulisan teks pada data1" << endl;
    myFile.close();

    myFile.open("data2.txt",ios::app);
    myFile <<"penuliskan teks pada data2" << endl;
    myFile.close();

    myFile.open("data3.txt",ios::trunc);
    myFile <<"penuliskan teks pada data3" << endl;
    myFile.close();

    cin.get();
    return 0;
}