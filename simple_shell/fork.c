#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t pid;

    printf("before fork i was 1\n");

    pid =fork();

    if(pid == -1){
        perror("unsuccessful\n");
        return 1;
    }
    printf("after fork I became 2\n");
    return 0;
   /* if(pid == 0)
    {
        sleep(40);
        printf(" I am the child\n");
    }
    else
        ppid = getpid();
        printf("the ppid is %u\n", ppid);
    return 0;*/
}
