#include <stdio.h>
#include "main.h"

/**
 * print_square - print a swuare
 *
 * @size: dimensions of square
 *
 * Return: void
 */

void print_square(int size)
{
int i;
if (size > 0)
{
i = 0;
for (i = 1; i <= size; i++)
{
int j;
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
