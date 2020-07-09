#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa{
    string nama;
    string jurusan;
    string NIM;
    double ipk;
};

int main(){
    Mahasiswa mahasiswa1, mahasiswa2;

    mahasiswa1.nama = "otong";
    mahasiswa1.jurusan = "Teknik informatika";
    mahasiswa1.NIM = "21843347";
    mahasiswa1.ipk = 3.4;

    mahasiswa2.nama = "ucup";
    mahasiswa2.jurusan = "Teknik perkebunan";
    mahasiswa2.NIM = "21843787";
    mahasiswa2.ipk = 4.0;

    cout <<"nama \t\t: " << mahasiswa1.nama << endl;
    cout <<"jurusan \t: " << mahasiswa1.jurusan << endl;
    cout <<"NIM \t\t: " << mahasiswa1.NIM << endl;
    cout <<"ipk \t\t: " << mahasiswa1.ipk << endl << endl;

    cout <<"nama \t\t: " << mahasiswa2.nama << endl;
    cout <<"jurusan \t: " << mahasiswa2.jurusan << endl;
    cout <<"NIM \t\t: " << mahasiswa2.NIM << endl;
    cout <<"ipk \t\t: " << mahasiswa2.ipk << endl;

    return 0;
}