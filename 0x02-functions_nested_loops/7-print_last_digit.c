#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of any number
 *
 * @num: integer parsed
 *
 * Return: 0
 */

int print_last_digit(int num)
{
int result;

result = num % 10;
if (num < 0)
{
result *= -1;
}
_putchar(result + '0');
return (result);
}
