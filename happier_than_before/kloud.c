#include <stdio.h>
#include <string.h>

float avg(int marks[], int size){
    int i, sum = 0;
    int size;
    size = sizeof(marks[])/sizeof(marks[0]);
    for(i = 0; i < size; i++)
    sum += marks[i];
    sum =sum/size;
    return sum;
   
    }
void main(){
    int a;
    float average;
    int marks[]={15, 20, 15, 30, 20};
    average = avg(marks, a);
    printf("%f\n", average);

    
}