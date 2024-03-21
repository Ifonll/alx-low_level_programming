#include <stdio.h>
#include <string.h>

int main(){

    char name[20];
    printf("enter a name: \n");
    gets(name);
    strlen(name);
    printf("%d\n", strlen(name));
}