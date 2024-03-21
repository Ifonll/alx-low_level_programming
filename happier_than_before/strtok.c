#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main(){
    char str[] = "this marwa a student at alx";
    const char delim[5] = " ";
    char *token = strtok(str, delim);
    int i;
while (token != NULL){
    printf("%s\\0", token);
    token =strtok(NULL, delim);

}
putchar('\n');
/**for(i = 0;i < strlen(str); i++){
   if(str[i]== NULL)
    printf("\\0", str[i]);
}*/
}