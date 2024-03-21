#include <stdio.h>

void sum(int, int); //function declaration // parameters

void main(){
    sum(4, 7); //argument
}


void sum(int a, int b){ //function definition // parameters
    int result = 0;
    result = a+b;
    printf("%d\n", result);

}

