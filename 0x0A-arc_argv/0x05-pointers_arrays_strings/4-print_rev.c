#include <stdio.h>

void print_rev(char *s){
    int i, l =0;
    for(i = 0; s[i] != '\0'; i++){
        l = l + 1;
    }

    int j;
    for(j = l; j >= 0; j--){
        printf("%c", s[j]);
    }
    printf("\n");
}
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}