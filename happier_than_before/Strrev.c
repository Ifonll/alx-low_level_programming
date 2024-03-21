#include <stdio.h>
#include <string.h>

int main(){

    char s1[] = "marwagharieb";
    int i, l;
    char ch; 

    l = strlen(s1);
    

    for(i = 0; i < l/2;i++){
        ch = s1[i];
        s1[i] = s1[l-1-i];
        s1[l-1-i] = ch;
    
    }
    printf("%s\n", s1);
}