#include <iostream>
using namespace std;

template <typename T>
void swap(T *a, T *b);

void swap_int(int *a, int *b);

int main(){
    int x, y;
    cout << "please input the value of x, y: ";
    cin >> x >> y;

    cout << "x = " << x << ", y = " << y << endl;
    swap_int(&x, &y);
    cout << "Swaping ......" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}

template <typename T>
void swap(T *a, T *b){
    T temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_int(int *a, int *b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}
