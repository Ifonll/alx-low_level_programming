#include <stdio.h>
#include <string.h>

void rev_string(char *s){
    int  l, i = 0;
    char *c;
    l = strlen(s);
    while(i < l){
    c[i] = s[i];
    s[i] = s[l-1-i];
    i++;
    }
}

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}