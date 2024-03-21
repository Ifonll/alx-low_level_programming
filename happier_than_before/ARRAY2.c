#include <stdio.h>

int main(){

    int marks[5], full[5], i, sum1 = 0, sum2 = 0, sum3;

    printf(" enter the full marks:");
    for(i = 0; i < 5; i++){
    scanf("%d", &full[i]);
    sum1 = sum1 + full[i];
    }

    printf("enter the students' marks: ");

    for (i =0; i < 5; i++){ 
    scanf("%d", &marks[i]);
    sum2 = sum2 + marks[i];
    }
    sum3 = sum2*100/sum1;


printf("%d%\n", sum3);
    //for(i = 4; i >= 0; i--)1
    //printf("%d\n", a[i]);

}