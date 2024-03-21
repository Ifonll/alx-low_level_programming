#include <stdio.h>

int main(){
    int a, i, sum =0;

    for(i=1; i <= 5; i++){

        printf("enter a number\n");
        scanf("%d", &a);
        if(a < 0)
            break;
        sum = sum + a;
    }

    printf("%d\n", sum);
}