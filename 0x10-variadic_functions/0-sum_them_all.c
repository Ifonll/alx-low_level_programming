#include "variadic_functions.h"
#include <stdarg.h>
/**
 * Variadic function - a function that returns the sum of all its parameters
 * va_list - a fuction in library stdarg
 * va_satrt - a fuction in library stdarg
 * va_end - a fuction in library stdarg
 * @num: a parameter of integer type
 * @i: an integer
 * Return: 0
*/

int sum(int num, ...) {
    int result = 0;

    // Initialize the va_list
    va_list args;
    va_start(args, num);

    // Loop through the arguments and add them to the result
    for (int i = 0; i < num; i++) {
        result += va_arg(args, int);
    }

    // Clean up the va_list
    va_end(args);

    return result;
}