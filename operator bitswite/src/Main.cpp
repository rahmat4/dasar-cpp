#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(unsigned short val, string nama){
	cout << nama << " --> " << bitset<8>(val) << endl;
}

int main(){

	unsigned short a = 6;
	unsigned short b = 10;
	unsigned short c;

	cout << "\n>> - Bitwise SHR" << endl;
	c = a >> 1;
	printBinary(a,"a");
	printBinary(c,"c");
	cout << "c= " << c << endl;

	cout << "\n<< - Bitwise SHL" << endl;
	c = a << 1;
	printBinary(a,"a");
	printBinary(c,"c");
	cout << "c= " << c << endl;

	cout << "\n~ - Bitwise NOT" << endl;
	c = ~a;
	printBinary(a,"a");
	printBinary(c,"c");
	cout << "c= " << c << endl;

	cout << "\n^ - Bitwise XOR" << endl;
	// 1. salah satu nilai true atau false , maka hasil true
	// 2. kedua nilai true atau false , maka hasil false
	c = a ^ b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");
	cout << "c= " << c << endl;

	cout << "\n| - Bitwise OR" << endl;
	// 1. kedua nilai false , maka hasil false
	// 2. salah satu atau kedua  nilai true , maka hasil true
	c = a | b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");
	cout << "c= " << c << endl;

	cout << "\n& - Bitwise AND" << endl;
	// 1. kedua nilai true atau 1, maka hasil true atau 1
	// 2. salah satu nilai true atau false , maka hasil false
	//c = a & b;
	printBinary(a,"a");
	printBinary(b,"b");
	cout <<"-----------------" << endl;
	a&=b;
	printBinary(a," ");
	cout << "  --> " << a << endl;
	
	cin.get();
	return 0;
}

// bitwise operator
// &	AND	Bitwise AND
// |	OR	Bitwise inclusive OR
// ^	XOR	Bitwise exclusive OR
// ~	NOT	
// <<	SHL	Shift bits left
// >>	SHR	Shift bits right