#include <stdio.h>
#include <unistd.h>

int main (void){
    int a = 10;
    int b = 20;
    int sum = a + b;
    pid_t my_pid;
    my_pid = getppid();

    printf("sum = %d\n", sum);
    printf("my pid is = %u\n", my_pid);
    return (0);
}
