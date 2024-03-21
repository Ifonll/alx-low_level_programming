#include <stdio.h>

const char* check(int, int);

void main(){
int x, y;
const char* l;
printf("enter two numbers: ");
scanf("%d %d", &x, &y);
l = check(x, y);
printf("%s\n", l);

}
const char* check(int a, int b){
    if(a > b)
        return ("first num is greater");
    else
        return ("second num is greater");
}