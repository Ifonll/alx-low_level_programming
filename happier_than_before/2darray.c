#include <stdio.h>

int main(){

    int i,j,a[2][3], sum = 0;


        for(i = 0; i < 2; i++){
            for(j =0; j < 3; j++){
            scanf("%d", &a[i][j]);
            printf("%d\t", a[i][j]);
            sum = sum + a[i][j];
            }
            printf("\n");

        }
        printf("%d\n", sum);

        for(i = 0; i < 3; i++){
            for(j = 0; j < 2; j++){
                printf("%d\t", a[j][i]);
            }
            printf("\n");
        }
    
}