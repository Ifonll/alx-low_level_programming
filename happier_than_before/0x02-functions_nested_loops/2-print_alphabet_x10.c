#include <stdio.h>

void print_alphabet_x10(void){
    char c;
    int i;
    for(i = 0; i < 10; i++){
        for(c = 'a'; c <= 'z'; c++){
            putchar(c);
        }
        putchar('\n');
    }
    
}
int main(){
    print_alphabet_x10();
    return (0);
}