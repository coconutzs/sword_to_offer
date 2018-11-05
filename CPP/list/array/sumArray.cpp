#include <iostream>
#define len(x) (sizeof(x) / sizeof(x[0]))

using namespace std;

int sumArray(int *p, int len);

int main(){
    int a[] = {0, 1, 3, 6, 8};
    int sum_a = sumArray(a, len(a));
    cout << "The sum of array a[] is " << sum_a << endl;
}

int sumArray(int *p, int len){
    int i, sum;
    sum = 0;
    for(i = 0; i < len; i++){
        sum += *p++;
    }
    return sum;
}
