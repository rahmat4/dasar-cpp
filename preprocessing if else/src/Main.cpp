#include <iostream>

#define ID 1
#if ID == 0
    #define LANG "indenesia"
#else
    #define LANG "english"
#endif

using namespace std;

int main(){
    cout << LANG << endl;

    return 0;
}