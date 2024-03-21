#include <stdio.h>

int main(){
    int i, j, sr, sc;
    int a[2][3] = {1,1,1,2,2,2};

    for(i = 0; i < 2;i++ ){
        sr=0;
        for(j = 0; j < 3;j++){
            sr = sr + a[i][j];
        }
         printf("%d\n", sr);
    }
    for(i=0; i < 3; i++){
        sc =0;
        for(j =0;j < 2; j++ )
        {
            sc = sc + a[j][i];
            printf("%d\n", sc);
        }
    }
}