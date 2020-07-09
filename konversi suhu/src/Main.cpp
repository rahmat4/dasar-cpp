#include <iostream>
//#include <conio.h>
using namespace std;

int main(){
	double a;
	char ulang;
	int suhu;
	while(true){
		system("clear");
		cout << "\t  _______________________" << endl;
		cout << "\t | program konversi suhu |" << endl;
		cout << "\t  -----------------------" << endl << endl;
		cout <<"1. celsius " << endl;
		cout <<"2. reamur " << endl;
		cout <<"3. farenhit " << endl;
		cout <<"4. kelvin " << endl;
		cout <<"5. rankie " << endl << endl;
		cout <<"pilih konversi suhu : ";
		cin >> suhu;
		cout << endl;
		if(suhu == 1){
			cout << " masukan suhu dalam celsius : ";
			cin >> a;
			cout << endl;
	
			cout << " suhu dalam reamur   : " << a * 4/5 << endl;
			cout << " suhu dalam farenhit : " << a * 9/5 + 32 << endl;
			cout << " suhu dalam kelvin   : " << a + 273.15 << endl;
			cout << " suhu dalam rankie   : " << a * 9/5 + 491.67 << endl << endl;
	// 	cout <<"lagi (Y/T) : ";
	// cin >> ulang;
		}else if(suhu == 2){
			cout <<"masukan suhu dalam reamur : ";
			cin >> a;
			cout << endl;
			cout << " suhu dalam celsius  : " << a/0.8 << endl;
			cout << " suhu dalam farenhit : " << a*2.25+32 << endl;
			cout << " suhu dalam kelvin   : " << a/0.8+273.15 << endl;
			cout << " suhu dalam rankie   : " << a*2.25+491.67 << endl << endl;
	// cout <<"lagi (Y/T) : ";
	// cin >> ulang;
		}else if(suhu == 3){
			cout <<"masukan suhu dalam farenhit : ";
			cin >> a;
			cout << endl;
			cout << " suhu dalam celsius  : " << (a-32)*5/9 << endl;
			cout << " suhu dalam reamur   : " << (a-32)*4/9 << endl;
			cout << " suhu dalam kelvin   : " << (a-32)*5/9+273.15 << endl;
			cout << " suhu dalam rankie   : " << a+459.67 << endl << endl;
	// cout <<"lagi (Y/T) : ";
	// cin >> ulang;
		}else if(suhu == 4){
			cout <<"masukan suhu dalam kelvin : ";
			cin >> a;
			cout << endl;
			cout << " suhu dalam celsius  : " << a-273.15 << endl;
			cout << " suhu dalam reamur   : " << (a-273.15)*4/5 << endl;
			cout << " suhu dalam farenhit : " << (a-273.15)*9/5+32 << endl;
			cout << " suhu dalam rankie   : " << a*1.8 << endl << endl;
	// cout <<"lagi (Y/T) : ";
	// cin >> ulang;
		}else if(suhu == 5){
			cout <<"masukan suhu dalam rankie : ";
			cin >> a;
			cout << endl;
			cout << " suhu dalam celsius  : " << (a-491.67)*5/9 << endl;
			cout << " suhu dalam reamur   : " << (a/1.8-273.15)*0.8 << endl;
			cout << " suhu dalam kelvin   : " << a/1.8 << endl;
			cout << " suhu dalam farenhit : " << a-459.67 << endl << endl;
	// cout <<"lagi (Y/T) : ";
	// cin >> ulang;
		}else{
			cout <<"pilihan anda tidak ada !!! "<< endl << endl;
		//cout <<"lagi (Y/T) : ";
	//cin >> ulang;
		}
		system("pause");
//		getline(cin,ulang);

	}

	return 0;
}