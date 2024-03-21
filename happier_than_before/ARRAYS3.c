#include <stdio.h>

int main(){
    int i, a[5], even, odd;

    printf("enter array elements: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
        if(a[i]%2 == 0)
            even++;
        else 
            odd++;
            
    }

    printf("total even no are: %d\n", even);
    printf("total odd numbers are: %d\n", odd);
}