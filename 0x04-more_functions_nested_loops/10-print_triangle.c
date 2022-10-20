#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: integer parsed
 *
 * Return: void
 */

void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
putchar('\n');
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= (size - i))
{
putchar(' ');
}
else
{
putchar('#');
}
}
putchar('\n');
}
}
