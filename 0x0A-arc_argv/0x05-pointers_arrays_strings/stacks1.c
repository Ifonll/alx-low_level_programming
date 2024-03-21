#include <stdio.h>
#define Max 5
int first = -1;
int stacks_arr[5];
int i;

void push(int data){
    if(first == Max -1){
    printf("overflow\n");
    return;
    }

    for( i = first; i > 0; i--){
    stacks_arr[i] = stacks_arr[i -1];
}