#include <iostream>
using namespace std;

void print(int *nilaiPtr, int baris, int kolom){
    int index = 0;
    for(int i=0;i<baris;i++){
        cout <<"[ ";
        for(int j=0;j<kolom;j++){
            cout << *(nilaiPtr + index) << " ";
            index++;
        }
        cout <<"]"<< endl;
    }
}

int main(){
    int baris = 4;
    int kolom = 5;
    int index = 0;
    int nilai[baris][kolom] = {
        {1,2,3,4,5},
        {6,7,8,9,0},
        {1,2,4,8,1},
        {6,2,9,5,0}
    };
    cout <<"cara 1" << endl;
    print(*nilai,baris,kolom);

    int nilai1[4][5] = {
        {1,2,3,6,5},
        {6,7,3,9,0},
        {1,2,3,8,1},
        {6,2,7,5,0}
    };

    cout << endl;
    cout <<"cara 2" << endl;
    for(int i=0;i<4;i++){
        cout <<"[ ";
        for(int j=0;j<5;j++){
            cout << nilai1[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}