#include <stdio.h>
#include <stdlib.h>


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h){
    
    size_t length = 0;
    if( str == NULL)
        printf("[0] (nil)");
    const list_t *str = NULL;
    str = h;
    while (str != NULL){
        printf("%d", str -> next);
        str = str -> next;
    }
}