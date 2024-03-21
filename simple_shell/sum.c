#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i;
    int sum = 0;

    printf("argc equal: %d\n", ac);

    for(i = 0; i < ac; i++){
        printf("argv[%d] = %s\n", i, *av);
        av++;

    }
    av++;
    sum += atoi(av[i]);
    sleep(5);
    printf("sum = %d", sum);

    return (0);

}

