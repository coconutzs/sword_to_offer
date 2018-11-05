#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
void print(T* arr, int len);

int main(){
    const unsigned short LEN = 5;

    char charArr[LEN] = {'a', 'b', 'c', 'd', 'e'};
    double douArr[LEN] = {1.5, 2.5, 3.5, 4.5, 5.5};
    print<>(charArr, sizeof(charArr)/sizeof(charArr[0]));
    print<>(douArr, sizeof(douArr)/sizeof(douArr[0]));

    char *p_c = charArr;
    double *p_d = douArr;

    cout << "charArr:" << endl;
    for (int i=0; i<LEN; i++){
        cout << *p_c++ << "\t" << reinterpret_cast<unsigned long>(p_c) << endl;
    }

    cout << "\ndouArr:" << endl;
    for (int j=0; j<LEN; j++){
        cout << *p_d++ << "\t" << reinterpret_cast<unsigned long>(p_d) << endl;
    }
    return 0;
}

template<typename T>
void print(T* arr, int len){
    for (int i=0; i<len; i++){
        cout << *arr << "  ";
        ++arr;
    }
    cout << endl;
}
