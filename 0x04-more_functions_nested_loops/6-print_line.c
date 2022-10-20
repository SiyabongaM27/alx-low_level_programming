#include <stdio.h>
#include "main.h"

/**
 * print_line - print a line
 *
 * @n: integer parsed
 *
 * Return: void
 */

void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
