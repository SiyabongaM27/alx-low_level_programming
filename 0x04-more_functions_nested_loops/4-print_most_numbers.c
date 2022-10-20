#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9 except 2 and 4
 *
 * void
 *
 * Ruturn: void
 */

void print_most_numbers(void)
{
int num;

num = 0;
while (num < 10)
{
if (num != 2 && num != 4)
putchar(num + '0');
num++;
continue;
}
putchar('\n');
}
