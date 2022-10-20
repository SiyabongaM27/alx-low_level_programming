#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print more numbers
 *
 * void
 *
 * Return: void
 */

void more_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
char j;
for (j = 0; j < 15; j++)
{
if (j / 10)
{
putchar((j / 10) + '0');
putchar((j % 10) + '0');
}
else
{
putchar((j % 10) + '0');
}
}
putchar('\n');
}
}
