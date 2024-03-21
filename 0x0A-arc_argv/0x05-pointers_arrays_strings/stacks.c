#include <stdio.h>
#define Max 4

int stacks_arr[Max];
int top = -1;
int i;

/*int isFull(){
    if (top == Max -1)
    return 1;
    else 
    return 0;
}*/

void push(int data){
    if (top == Max - 1){
        printf(" overflow\n");
        return;
    }
    top = top + 1;
    stacks_arr[top] = data;
}

int main(){
    push(2);
    push(4);
    push(6);
    push(8);
    push(10);
    for(i = 0; i < Max; i++){
        printf("%d\n", stacks_arr[i]);
    }
    return 0;
}