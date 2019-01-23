#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    int a = 1;
    float b = 2.0;
    int *p_a = &a;
    float *p_b = &b;
    *p_a = 3.0;
    *p_b = 4;
    cout << "value stored in p_a: " << *p_a << endl;
    cout << "value of p_a: " << reinterpret_cast<unsigned long>(p_a) << "\ttype of p_a: " << typeid(p_a).name() << endl;
    cout << "value stored in p_b: " << *p_b << endl;
    cout << "value of p_b: " << reinterpret_cast<unsigned long>(p_b) << "\ttype of p_b: " << typeid(p_b).name() << endl;
}
