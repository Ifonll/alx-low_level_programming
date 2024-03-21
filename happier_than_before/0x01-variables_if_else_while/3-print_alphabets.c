#include <stdio.h>

int main(){
    char c = 'a';
    while(c <= 'z')
    {
        putchar(c);
        c++;
    }
    c = 'A';
    while(c <= 'Z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    return 0;
}