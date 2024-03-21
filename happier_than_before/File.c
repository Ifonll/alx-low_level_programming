#include <stdio.h>

int main(){
    FILE *fp;
    char str[] = "marwa is great";

    fp =fopen("file.txt", "w");
    if(fp == NULL)
    {
        perror("ERORR OPENING FILE ");
        return 1;
    }
    fputs(str, fp);
    fclose(fp);
    return 0;
}