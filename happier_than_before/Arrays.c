#include <stdio.h>

int main(){
    int i = 100, a[100];

    for (i =0; i < 100; i++){
        if (i < 50){
            a[i] = 0;
        }
        else    
            a[i] = 1;
            printf("%d", a[i]);
    }
}