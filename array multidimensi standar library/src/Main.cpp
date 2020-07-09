#include <iostream>
#include <array>
using namespace std;

const int kolom = 3;
const int baris = 2;
void print(array<array<int,kolom>,baris>&nilai){
    for(array<int,kolom> vectorBaris : nilai){
        cout <<"[ ";
        for(int nilaiKolom : vectorBaris){
            cout << nilaiKolom << " ";
        }
        cout <<"]" << endl;
    }
}

int main(){
    array<array<int,kolom>,baris>nilai = {
        5,9,3,
        7,9,2
    };

    cout <<"menggunakan for biasa biasa" << endl;
    for(int i=0;i<nilai.size();i++){
        cout <<"[ ";
        for(int j=0;j<nilai[i].size();j++){
            cout << nilai[i][j] << " ";
        }
        cout << "]" << endl;
    }

    cout <<"\nmenggunakan for each" << endl;   
    for(array<int,kolom> barisArray : nilai){
        cout <<"[ ";
        for(int kolomArray : barisArray){
            cout << kolomArray << " ";
        }
        cout <<"]" << endl;
    }

    cout <<"\nmenggunakan looping dalam fungsi" << endl;
    print(nilai);
    
    return 0;
}