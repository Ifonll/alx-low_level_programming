#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

char *line = NULL;
size_t len = 0;
ssize_t read;

printf("Hasan&Marwa$");
read = getline(&line, &len, stdin);
if(read != -1){
printf("%s", line);
}
else
printf("Error reading message");

free(line);
return 0;
}