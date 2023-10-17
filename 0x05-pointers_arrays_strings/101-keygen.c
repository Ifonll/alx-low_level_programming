#include "main.h"
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main(void)
{
char c;
int x;

srand(time(0));
while (x <= 2645)
// 2645 is the sum of the ASCII codes of the characters of the password
{
c = rand() % 128;
x += c;
putchar(c);
}
putchar(2772 - x);
// 2772 is the sum of the ASCII codes of the characters of the password
return (0);
}
