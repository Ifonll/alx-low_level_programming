#include <stdio.h>

int main(){
int a, b;
char c;

printf("enter an operator: ");
scanf("%c", &c);
printf("enter two numbers: ");
scanf("%d %d", &a, &b);

switch(c)
{
case '+': printf("addition :%d %c %d = %d\n", a, c, b, a+b);
    break;
case '-': printf("sumtraction:%d %c %d = %d\n", a, c, b, a-b);
    break;
case '*': printf("multiplication:%d %c %d = %d\n", a, c, b, a*b);
    break;
case '/': printf("dividing: %d %c %d = %d\n", a, c, b, a/b );
    break;
default:    printf("Error\n");
            break;
}
}