#include <iostream>
#include "kalkulator.h"

int main(){
    double a,b,hasil;
    char c;
    std::cout <<"kalkulator namespace " << std::endl << std::endl;
    std::cout <<"masukan angka : "; std::cin >> a;
    std::cout <<"pilih operator +,-,*,/ : "; std::cin >> c;
    std::cout <<"masukan angka : "; std::cin >> b;
    std::cout <<"hasil dari " << a <<" " << c <<" " << b <<" : ";
    kalkulator::vector(a,b,c);

    return 0;
}