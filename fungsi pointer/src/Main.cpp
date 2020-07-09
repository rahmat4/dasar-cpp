#include <iostream>
using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main(){
    int a = 20;
    cout <<"nilai a   : " << a << endl;
    cout <<"address a : " << &a << endl << endl;
    fungsi(&a);
    kuadrat(&a);

    return 0;
}

void fungsi(int *a){
    cout <<"nilai    : " << *a << endl;
    cout <<"address  : " << a << endl << endl;
}

void kuadrat(int *a){
    cout <<"nilai : " << (*a) * (*a) << endl;
    cout <<"address : " << a << endl << endl;
}