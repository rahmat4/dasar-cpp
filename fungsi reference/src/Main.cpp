#include <iostream>
using namespace std;

// prototype
void fungsi(int &);
void kuadrat(int &);

int main(){
    int a = 10;
    cout <<"nilai a   : " << a << endl;
    cout <<"address a : " << &a << endl << endl;

    fungsi(a);
    kuadrat(a);

    return 0;
}

// reference
void fungsi(int &a){
    cout <<"nilai : " << a << endl;
    cout <<"address : " << &a << endl << endl;
}

void kuadrat(int &a){
    cout <<"kuadrat : " << a*a << endl;
    cout <<"address : " << &a << endl << endl;
}