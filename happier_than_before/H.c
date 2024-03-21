#include <stdio.h>

int main(){

    int i, sum = 0;

    do{
        printf("enter a number: ");
        scanf("%d", &i);
        printf("%d\n", i);
        sum = sum + i;
    }
    while(i > 0);
    printf("sum = %d", sum);
}