#include <stdio.h>

struct stk{
int arr[100];
int top;

int isEmpty(int top)
{
    if (top == -1)
    return 1;
    else return 0;
}

void push(int x)
{
    if (top == 99)
    return;
    else
        top++;arr[top] = x;
}

void pop(){
    if (isEmpty())
    return;
    else
    top--;
}

int Top(){
if(isEmpty())
return -1;
else
return arr[top];
}
};

void main();
{
    stk myStack;
myStack.push(5);
myStack.push(6);
myStack.push(8);
}