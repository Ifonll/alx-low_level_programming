#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    scanf("%d", &n);
    printf("enter values: ");
    int * ptr = (int *)malloc(n* sizeof(int));
    for(i = 0; i < n; i++){
        scanf("%d", (ptr+i));
        printf("%d\n", *(ptr+i));
    }
    int *ptr1 = (int *)realloc(ptr, n*sizeof(int));
    scanf("%d", &n);
     for(i = 0; i < n; i++){
    
        printf("%d\n", *(ptr1+i));
    }
}