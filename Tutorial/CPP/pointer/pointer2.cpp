#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    float a = 2.5;
    float b = 3.5;
    float *p_a = &a;
    float *p_b = &b;
    cout << a << "\t" << *p_a << "\t" << reinterpret_cast <unsigned long>(p_a) << endl;
    cout << b << "\t" << *p_b << "\t" << reinterpret_cast <unsigned long>(p_b) << endl;
}
