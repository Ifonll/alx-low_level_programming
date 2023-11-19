#include <stdio.h>
#include <stdlib.h>
#include "file.c"

int fun(int ,int);
int main(){
    int sum = fun(3, 4);
    printf("%d", sum);
    return 0;
}