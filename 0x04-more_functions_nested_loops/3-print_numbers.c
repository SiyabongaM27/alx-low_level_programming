#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Void
 *
 * Return: void
 */

void print_numbers(void)
{
int num;

num = 0;
while (num < 10)
{
_putchar(num + '0');
num++;
}
_putchar('\n');
}
