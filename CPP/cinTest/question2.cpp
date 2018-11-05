#include <iostream>

int main(){
    char answer;
    int n = 0;
    std::cout << "Do you love me?" << std::endl;
    if( std::cin >> answer ){
        switch( answer ){
            case 'Y':
            case 'y':
                std::cout << "Oh, fuck me!" << std::endl; 
                break;
            case 'N':
            case 'n':
                std::cout << "I will fuck you!" << std::endl;
                break;
            default:
                std::cout << "Error input!" << std::endl;
                std::cout << "Do you love me?" << std::endl;
                break;
        }
    }
    std::cin.ignore(100, '\n');
    std::cout << "Press any key to end..." << std::endl;
    std::cin.get();

    return 0;
}
