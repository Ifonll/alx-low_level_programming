#include <stdio.h>
#include <string.h>

int main(){

    char s1[5] = "hello", s2[5] = "marwa";

    strcat(s1, s2);
    printf("%s\n", s1);
}