#include <stdio.h>

int func(int num){
    int count;
    while(num){
        count++;
        num >>= 1;
    }
    return(count);
}

int main(){

printf("%d", func(435));
}