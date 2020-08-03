#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){
    int cari;
    array <int, 10> nilai = {2,6,9,8,4,1,3,5,7,0};
    cout <<"array --> ";
    for(int a : nilai){
        cout << a  << " ";
    }
    
    cout << endl;
    sort(nilai.begin(),nilai.end());
    cout <<"array --> ";
    for(int a : nilai){
        cout << a  << " ";
    }
    cout << endl;
    cout <<"\ncari anggka dalam array : ";
    cin >> cari;
    bool ketemu =  binary_search(nilai.begin(),nilai.end(),cari);
    cout <<"angka : ";
    if(ketemu){
        cout <<"ketemu" << endl;
    }else{
        cout <<"tidak ketemu" << endl;
    }
    
    return 0;
}