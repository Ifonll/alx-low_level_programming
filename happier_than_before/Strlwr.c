#include <stdio.h>

int main(){
    int i;
    char s[] = "MaRwa GharieB";

    for(i  = 0; s[i] != '\0'; i++){
        if(s[i] >= 'A' && s[i] <='Z'){
            s[i] = s[i] + 32;
        }
    }
    printf("%s\n", s);

}

