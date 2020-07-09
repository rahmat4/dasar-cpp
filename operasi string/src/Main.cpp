#include <iostream>
#include <string>

using namespace std;

int main(){
    string data = "otong";
    // default
    cout <<"index ke - [0] --> " << data[0] << endl;
    cout <<"index ke - [1] --> " << data[1] << endl;
    cout <<"index ke - [2] --> " << data[2] << endl;
    cout <<"index ke - [3] --> " << data[3] << endl;
    cout <<"index ke - [4] --> " << data[4] << endl << endl;

    // menggunakan looping
    for(int i=0;i<data.size();i++){
        cout <<"index ke - [" << i <<"] --> " << data[i] << endl;
    }

    // ubah data
    data[0] = 'a';
    cout << data << endl;

    // tambah data
    string data1 = " beli";
    data.append(data1);
    cout << data << endl;
    string data2 = " bakwan";
    cout << data + data2 << endl;
    string data3 = " goreng";
    cout << data + data3 << endl;

    return 0;
}