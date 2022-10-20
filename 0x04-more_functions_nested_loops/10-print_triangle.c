#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size - integer parsed
 *
 * Return: void
 */

void print_triangle(int size)
{
if (size > 0)
{
int i;
for (i = 1; i <= size; i++)
{
   int j;
   for (j = 1; j <= i; j++)
   {
       putchar('#');
   }
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
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
