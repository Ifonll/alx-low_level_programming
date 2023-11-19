#include <stdio.h>

int add(int, int);

int main(){

    int sum = add(2, 5);
    printf("sum is %d", sum);
}

int add(int a, int b){

    return(a + b);
}