#include <stdio.h>

void _puts(char *str){
    int i;
    if(str[i] != '\0'){
        printf("%s\n", str);
    } else return;
}

int main(){

    char *s;
    s = "hallo";
    _puts(s);

}