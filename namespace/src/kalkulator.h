#include <iostream>

namespace kalkulator{
    double hasil;

    void vector(double a, double b, char c){
        if (c=='+'){
            hasil = a + b;
        }else if(c=='-'){
            hasil = a - b;
        }else if(c=='*'){
            hasil = a * b;
        }else if(c=='/'){
            hasil = a / b;
        }else{
            std::cout <<"opertor tidak ada!!!" << std::endl;
        }
        std::cout << hasil << std::endl;
    }
}