#include "search_algos.h"
/**
 * linear_search - searching linear
 * @array: array of integers
 * @size: size of array
 * @value: to be searched for
 * Return: int 
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;
for(i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (value == array[i])
{
return (i);
}
}
return (-1);
}
