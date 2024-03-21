#include <stdio.h>

int main(){
int i, he;

printf("enter your age :");
scanf("%d \n %d", &i, &he);

if(i > 30){
    if(he < 40)
    {
        printf("I will get married with him\n");
    }
    else
        printf("he is so old for me\n");
}
else
    printf(" I am not getting married, I am still young\n");
}
