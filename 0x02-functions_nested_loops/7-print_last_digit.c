#include "main.h"
/**
* print_last_digit - print last digit
* @n: is a integer number
* Return: 0 (Success)
*/
int print_last_digit(int n)
{
int x;
if (n < 0)
{
x = -1 * (n % 10);
}
else
{
x = n % 10;
}
_putchar(x + '0');
}
