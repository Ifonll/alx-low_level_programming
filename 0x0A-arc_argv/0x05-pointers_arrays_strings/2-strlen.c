#include <stdio.h>

int _strlen(char *s){
    int i, j = 0;
    for(i = 0; s[i] != '\0'; i++){
      j = j + 1;  
    }

    return j;
}

int main(){
    int k;
    char *s;
    s= "hallo meine liebe Freund";
    k = _strlen(s);
    printf("%d\n", k);
    return 0;
}