#include <stdio.h>

int main(){

//continue;//
int a, i, sum = 0;

for(i = 1; i <= 5; i++){
    printf("enter a number: ");
    scanf("%d", &a);
    if(a < 0)
        continue;
    sum = sum + a;
}
    printf("sum = %d\n", sum);
}