#include <iostream>

int main(){
    const double coefficient = 9.0 / 5.0;
    const int bias = 32;

    char typeIn, typeOut, error_flag;
    double tempIn, tempOut;

    std::cout << "Please input the temperature..." << std::endl;
    std::cin >> tempIn >> typeIn;
    std::cin.ignore(100, '\n');

    switch( typeIn ){
        case 'c':
        case 'C':
            typeOut = 'F';
            tempOut = tempIn * coefficient + bias;
            break;
        case 'f':
        case 'F':
            typeOut = 'C';
            tempOut = (tempIn - bias) / coefficient;
            break;
        default:
            char error_flag = 'E';
            break;
    }

    if( error_flag != 'E'){
        std::cout << tempOut << " " << typeOut << std::endl;
    }
    else{
        std::cout << "Error input!" << std::endl;
    }
    return 0;
        
}
