#include <stdio.h>

int main(){

    char c = 'a';


    while (c <= 'z'){
        if(c != 'e' && c != 'q')
        putchar(c);
        c++;
    }
    putchar('\n');
}