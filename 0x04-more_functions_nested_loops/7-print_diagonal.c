#include <stdio.h>
#include "main.h"

/**
 * print_line - print a line
 *
 * @n: integer parsed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		for (i = 1; i <= n; i++)
		{
		putchar('\\');
		putchar('\n');
		}
	}
	else
	{
	putchar('\n');
	}
}

int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
