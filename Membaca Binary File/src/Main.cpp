#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream myFile;
    int hasil;
    myFile.open("data.bin",ios::in | ios::binary);
    myFile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));
    cout << hasil << endl;
    cout << "besar int : " << sizeof(hasil) << " byte" << endl;
    myFile.close();

    cin.get();
    return 0;
}