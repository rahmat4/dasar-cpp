#include <iostream>
#include <string>

using namespace std;

int main(){

    string data;
    while (true){
        cout <<"tebak nama : "; cin >> data;
        if(data == "otong"){
            cout <<"tebakan anda benar" << endl; break;
        }else{
            cout <<"tebakan anda salah" << endl;
        }
        
    }
    


    return 0;
}