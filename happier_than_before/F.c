#include <stdio.h>

int main(){
int i,j;

printf("enter a number: ");
scanf("%d", &j);
for(i = 0; i < 13; i++)
printf("%d x %d =  %d\n", i, j,j*i);
}