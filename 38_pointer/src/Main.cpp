#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *aPtr = nullptr;
    aPtr = &a;
    cout <<"nilai dari a   : " << *aPtr << endl;
    cout <<"address dari a : " << aPtr << endl << endl;

    int &b = a;
    int *bPtr = &b;

    cout <<"nilai dari b   : " << *bPtr << endl;
    cout <<"address dari b : " << bPtr << endl << endl;

    *bPtr = 10;
    cout <<"nilai dari b   : " << *bPtr << endl;
    cout <<"nilai dari a   : " << *aPtr << endl;
    cout <<"address dari b : " << bPtr << endl;
    cout <<"address dari a : " << aPtr << endl << endl;

    return 0;
}