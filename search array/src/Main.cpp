#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void print(array <int, 10> &nilai){
    cout <<"array : ";
    for(int &a : nilai){
        cout << a  << " ";
    }
    cout << endl;
}

int main(){
    int cari;
    array <int, 10> nilai = {2,6,9,8,4,1,3,5,7,0};
    print(nilai);
    sort(nilai.begin(), nilai.end());
    cout <<"cari angka dalam array di atas : "; cin >> cari;
    bool ketemu = binary_search(nilai.begin(),nilai.end(),cari);
    cout <<"angka : ";
    if(ketemu){
        cout << "ketemu" << endl;
    }else{
        cout <<"tidak ketemu" << endl;
    }

    return 0;
}