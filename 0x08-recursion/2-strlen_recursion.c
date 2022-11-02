#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return the string length
 *
 * @s: string parsed to function
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
int count = 0;

if (*s == '\0')
{
return (0);
}

count = _strlen_recursion(s + 1);
count++;

return (count);
}
