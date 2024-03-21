#include <stdio.h>

int _isalpha(int c){
    if(c = 97 && c <= 122 || c >= 65 && c <= 90)
    return 1;
    else return 0;
    
}
int main(){
    int k;
    k = _isalpha(108);
    putchar(k + '0');
    putchar('\n');
    return 0;
}