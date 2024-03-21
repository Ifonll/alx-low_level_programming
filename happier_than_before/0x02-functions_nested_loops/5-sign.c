#include <stdio.h>

int print_sign(int n){
    if(n > 0){
        putchar('+');
        putchar(',');
        return 1;
    }
    else if (n = 0){
        putchar('0');
         putchar(',');
        return 0;
    }
    else if(n < 0){
        putchar('-');
          putchar(',');
        return -1;
    
}
int main(){
    int k = print_sign(0);
    putchar(k + '0');
    putchar('\n');
    return 0;
}