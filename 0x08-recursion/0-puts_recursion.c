#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - print out a string using recursion
 *
 * @s: string parsed into function
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
