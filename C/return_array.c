#include <stdio.h>
#include <string.h>
int* test(int* p, int l);

int* test(int* p, int l){
    int b[l];
    for (int i=0; i<l; i++){
        b[i] = *(p+i);
    }
    /*
    return b; 这种方法是错误的！
    */
    int* p1;
    p1 = b;
    return p1;
}

int main(){
    int a[] = {
        1, 2, 3, 4, 5
    };
    int len_a = sizeof(a)/sizeof(a[0]);
    int* p = test(a, len_a);
    for (int i=0; i<len_a; i++){
        printf("%d\t",*(p+i));
    }
    printf("\n");
    return 0;
}
