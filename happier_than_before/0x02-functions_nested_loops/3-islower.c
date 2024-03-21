#include <stdio.h>

int _islower(int c){
    if(c >= 97 && c <= 122)
    return 1;
    else return 0;
}

int main(){
    int k;
    k = _islower('J');
    putchar(k + '0');
    putchar('\n');
}