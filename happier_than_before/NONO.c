#include <stdio.h>

void sum(void);

void main(){
    sum();

}

void sum(){
    int a , b, sum = 0;
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("%d\n", sum);
}