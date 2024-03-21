#include <stdio.h>

 void main(){
     int a = -111;
     char ch = 'k';
     float o = 1.6;
     void *p;
    p = &a;
    printf(" %d \n", *(int *)p);

    p =&ch;

    printf("%c\n", *(char*)p);

    p = &o;

    printf("%4.2f\n", *(float*)p);
}
