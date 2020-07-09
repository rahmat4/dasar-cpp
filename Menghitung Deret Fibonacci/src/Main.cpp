#include <iostream>
using namespace std;

void fibonacci1(int n){
    int fn = 0;
    int fn1 = 0;
    int fn2 = 1;
    for(int i=1;i<=n;i++){
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        cout <<"Fibonacci Ke - " << i << " : " << fn << endl;
        cout <<"fn2 : " << fn2 << endl;
        cout <<"fn1 : " << fn1 << endl;
        cout <<"fn  : " << fn << endl;
    }
}

int main(){
    int n;
    cout <<"Masukan Bilangan Fibonacci Ke - : ";
    cin >> n;
    fibonacci1(n);

    return 0;
}