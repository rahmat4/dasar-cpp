#include <iostream>
#include <string>

using namespace std;

int main(){

    string data1,data2,data3;
    cout <<"masukan kata : ";
    getline(cin,data1); // input membaca spasi
    cout <<"masukan kata : ";
    getline(cin,data2);
    cout <<"masukan kata : ";
    getline(cin,data3);
    cout <<"kata yang anda masukan adalah " << data1 << endl;
    cout <<"kata yang anda masukan adalah " << data2 << endl;
    cout <<"kata yang anda masukan adalah " << data3 << endl;

    return 0;
}