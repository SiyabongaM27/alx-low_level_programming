#include <stdio.h>
#include "main.h"

/**
 * print_array - print an array of defined size
 *
 * @a: int parsed
 * @n: int parsed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < n ; i++)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}
}
putchar('\n');
}
