#include <stdio.h>

void fun(int *, int *);

void main(){
    int p = 8, q = 9;
    fun(&p, &q);
    printf("x =%d y= %d\n", p, q);
}
void fun(int *p, int *q){
    *p = 3;
    *q = 6;
    printf("x =%d y= %d\n", *p, *q);
}