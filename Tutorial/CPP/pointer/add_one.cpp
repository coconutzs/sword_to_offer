#include <iostream>

using namespace std;

template <typename T>
void add_one(T *x);

int main(){
    int a = 5;
    float b = 2.5;
    cout << "a = " << a << endl;
    add_one(&a);
    cout << "In main(): value is " << a << endl;
    
    cout << "b = " << b << endl;
    add_one(&b);
    cout << "In main(): value is " << b << endl;

    return 0;
}

template <typename T>
void add_one(T *x){
    (*x)++;
    cout << "In add_one(): value is " << *x << endl;
}
