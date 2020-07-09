#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,5>nilai = {1,2,3,4,5};

    for(int i=0;i<nilai.size();i++){
        cout <<"nilai from [" << i <<"] = " << nilai[i] << " | address : " << &nilai[i] << endl;
    }

    cout <<"\nmenggunakan looping for each " << endl;
    for(int nilaiArray : nilai){
        cout <<"nilai array : " << nilaiArray << " | " << "address : " << &nilaiArray << endl;
    }
    cout << endl;
    cout << "menggunakan reference" << endl;
    for(int &nilaiArray : nilai){
        cout <<"nilai array : " << nilaiArray << " | " << "address : " << &nilaiArray << endl;
    }
    cout << endl;
//    for(int *nilaiArray : nilai){
//        cout <<"nilai array : " << *nilaiArray << " | " << "address : " << nilaiArray << endl;
//    }
    cout <<"address awal : " << nilai.begin() << endl;
    cout <<"address akhir : " << nilai.end() << endl;
    cout <<"nilai ke 2 : " << nilai.at(2) << endl;

    cout << nilai.back(); // mengambil nilai akhir
    return 0;
}