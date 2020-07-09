#include <iostream>
using namespace std;

int main(){
    int nilai[10];
    cout <<"program grafik nilai sederhana" << endl;
    cout <<"------------------------------" << endl << endl;
    cout <<"masukan jumlah siswa dengan nilai" << endl;
    for(int i=0;i<=10;i++){
        if(i == 0){
            cout <<"0 - 9   : ";
        }else if(i == 10){
            cout <<"100     : ";
        }else{
            cout << i*10 << " - " << (i*10)+9 << " : ";
        }
        cin >> nilai[i];
    }

    cout << endl;
    cout <<"grafik nilai" << endl;
    cout <<"------------" << endl << endl;
    for(int i=0;i<=10;i++){
        if(i == 0){
            cout <<"0 - 9   : ";
        }else if(i == 10){
            cout <<"100     : ";
        }else{
            cout << i*10 << " - " << (i*10)+9 << " : ";
        }
        for(int bintang=0 ; bintang < nilai[i] ; bintang++){
            cout <<"*";
        }
        cout << endl;
    }
    
    return 0;
}