#include "main.h"
/**
* swap_int - to swap the value of two integers
* @a : parameter
* @b : parameter
* Return : nothing
*/

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
