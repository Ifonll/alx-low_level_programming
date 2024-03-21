#include <stdio.h>

int main(){

    int i, l = 0; 
    char s1[30];

printf("ENTER A STRING: ");
gets(s1);

for(i = 0; s1[i] != '\0'; i++){
    l = l +1;
}
printf("%d\n", l);
}