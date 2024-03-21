#include <stdio.h>

int inc(int i){
    static int count = 0;
    count = count +1;
    return (count);
}
int main(){
    int i, j;
    for(i = 0; i <=4; i++){
    j = inc(i);
    printf("%d", j);
    }
    return 0;
}