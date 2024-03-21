#include <unistd.h>
#include <stdio.h>

int main(){
    char *argv[] = {"/bin/pwd", NULL};
    int val = execve(argv[0], argv, NULL);

    if(val == -1)
            perror("error");
    printf("done with execve\n");
    return 0;
}
    
