#include <iostream>
using namespace std;

int main(){
    int nilai[10] = {1,2,3,4,5,6,7,8,9,0};
    
    // for each
    for(int nilaiArray : nilai){
        cout << "address : " << &nilaiArray << " | nilai : " << nilaiArray << endl;
    }

    cout << endl;
    // menggunakan reference
    for(int &nilaiArray : nilai){
        nilaiArray += 2;
        cout << "address : " << &nilaiArray << " | nilai : " << nilaiArray << endl;
    }

    return 0;
}
















