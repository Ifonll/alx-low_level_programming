#include <stdio.h>
#include <stdlib.h>


int main(char **av, int ac){

    int i;
    for(i = 0; av[i] <'\0'; i++){
    printf("av = %s\n", *av);g
    }
    return 0;
}