#include <stdio.h>

void swap_int(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){

    int x = 5;
    int y = 10;
     printf("x =%d\n", x);
    printf("y = %d\n", y);
    swap_int(&x, &y);
    printf("x =%d\n", x);
    printf("y = %d\n", y);
    return (0);


}