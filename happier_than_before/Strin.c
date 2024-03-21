#include <stdio.h>
#include <string.h>

int main(){
    int i, length = 0;
    char name[20];
    gets(name);
    for(i = 0; name[i] != '\0';i++){
    length++;
    }
    printf("%d\n", length);
}