#include <iostream>
using namespace std;

int fibonacci(int n);

int main(){
	
	long angka,hasil;
	cout << "menghitung fibonacci ke : ";
	cin >> angka;
	hasil = fibonacci(angka);

	cout << "nilainya adalah : ";
	cout << hasil << endl;

	return 0;
}

int fibonacci(int n){
	if((n == 0)||(n == 1)){
		return n;
	}else{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
	cout << "fibonacci ke " << n << endl;
}