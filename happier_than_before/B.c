#include <stdio.h>

int main(){

    int a;

    printf("enter the age:");
    scanf("%d", &a);

    if(a > 45)
        printf("he is so old there is no chance\n");
    else if(a > 40)
        printf("he is still old but there is a chance\n");
    else if(a > 30)
        printf(" it is a suitable age for marriage\n");
    else if(a < 30)
        printf("I do not mind marring a guy younger than me\n");
    else 
        printf("I am not interested\n");

}
