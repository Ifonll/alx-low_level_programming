#include <stdio.h>

int main(){
    int i = 48;
    while(i < 58){
        putchar(i);
        i++;
        if(i != 58){
            putchar(' ');
            putchar(',');
        }
    }
    putchar('\n');
}