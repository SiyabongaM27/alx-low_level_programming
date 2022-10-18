#include <stdio.h>
#include "main.h"
/**
 * print_sign - print sign of a number
 *
 * @n: Integer parsed
 *
 * Return: 0 if zero, -1 if negative and 1 if positive
 */

int print_sign(int n)
{
if (n >= 1)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
