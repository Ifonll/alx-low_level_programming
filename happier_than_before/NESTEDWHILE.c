#include <stdio.h>

int main(){

    int i = 1, j = 0;

    while( j < 6){
        j++;
        while(i <= 9)
        {
            printf("*");
            i++;
        }
    
        printf("*\n");
    }
}