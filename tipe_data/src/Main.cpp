#include <iostream>

using namespace std;

int main(){

	// bilangan bulat
	int a = 5; // 32-bit
	long b = 6;
	short c = 7;

	// bilangan decimal
	float d = 1.0;
	double e = 2.5;

	// character
	char f = 'a'; //character 1-bit

	// boolean
	bool g = true; // true/false

    cout <<"\n-------------------------------" << endl;
	cout <<" ---> " << e << endl;
	cout <<" ---> " << sizeof(e) << " byte" << endl;
	cout <<" ---> MAX " << numeric_limits<double>::max() << endl;
	cout <<" ---> MIN " << numeric_limits<double>::min() << endl;

    cout <<"\n-------------------------------" << endl;
	cout <<" ---> " << d << endl;
	cout <<" ---> " << sizeof(d) << " byte" << endl;
	cout <<" ---> MAX " << numeric_limits<float>::max() << endl;
	cout <<" ---> MIN " << numeric_limits<float>::min() << endl;
	return 0;
}