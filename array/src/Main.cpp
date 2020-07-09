#include <iostream>
using namespace std;

int main(){
    int nilai[5] = {1,2,3,4,5};

    for(int i=0;i<5;i++){
        cout <<"index ke - " << i << " = " << nilai[i] << endl;
        cout <<"Address : " << &nilai[i] << endl;
    }

    int *ptr = nilai;
    *(ptr + 2) = 8;
    cout << endl;
    for(int i=0;i<5;i++){
        cout <<"index ke - " << i << " = " << nilai[i] << endl;
        cout <<"Address : " << &nilai[i] << endl;
    }

    cout << endl;
    cout <<"ukuran array : " << sizeof(nilai) << " byte" << endl;
    cout <<"jumlah member array : " << sizeof(nilai)/sizeof(int) << endl;

    return 0;
}