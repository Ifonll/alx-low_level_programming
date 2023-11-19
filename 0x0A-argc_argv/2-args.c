#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{   
    int arg;
    
    for(arg = 0; arg < argc; arg++){
        printf("%s\n", argv[arg]);
    }

    return (0);
}

