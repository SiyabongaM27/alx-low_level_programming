#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

n = 0;
while (n < 10)
{
putchar((n % 10) + '0');
n++;
if (n == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
