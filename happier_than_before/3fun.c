#include <stdio.h>
void check(int);

void main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    check(n);
}
void check(int a){

if(a%2 == 0)
    printf("even\n");
else
    printf("odd\n");

}