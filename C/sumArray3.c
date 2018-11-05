#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int sum = 0;
    printf("Please input the number...\n");
    do{
        scanf("%d",&a);
        sum += a;
    }
    while(getchar()!='\n');

    // printf("Input is %d.\n", a);
    printf("Sum of input numbers is %d.\n", sum);
    return 0;
}

