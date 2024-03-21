#include <stdio.h>
#include <stdlib.h>


int main(int ac, char **av){
    int i;
    for(i = 0; av[i] != '\0'; i++){
    printf("av[%d] = %s\n", i, av[i]);
    }
    return 0;
}
