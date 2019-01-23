#include<stdio.h>

int main()
{
    int array[100];
    int i = 0;
    int sum = 0;

    printf("Please input numbers...\n");

    do
    {
        scanf("%d", &*(array + i));
        sum += *(array + i);
        i++;
    }while(getchar()!='\n');
    printf("sum = %d.\n", sum);
    
    return 0;
}

