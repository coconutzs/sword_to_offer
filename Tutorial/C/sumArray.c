#include <stdio.h>
#include <stdlib.h>
#define len(x) (sizeof(x) / sizeof(x[0]))

int main(){
    int a[] = {0, 1, 3, 6, 8};
    int sum_a = sumArray(a, len(a));
    printf("The sum of array a[] is\t%d.\n", sum_a);
}

int sumArray(int arr[], int len){
    int i, sum;
    sum = 0;
    for(i = 0; i < len; i++){
        sum += arr[i];
    }
    return sum;
}
