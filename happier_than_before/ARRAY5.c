#include <stdio.h>

int main(){

    int i, arr1[5], arr2[5], arr3[5];

    printf("enter the elements of the first array: \n");
    for(i = 0; i < 5; i++)
    scanf("%d", &arr1[i]);
    printf("enter the elements of the second array: \n");
    for(i = 0; i < 5; i++)
    scanf("%d", &arr2[i]);
    for(i = 0; i < 5; i++){
    arr3[i] = arr1[i] + arr2[i];
    printf("the element of index %d is %d\n", i, arr3[i]);

    }1
}
