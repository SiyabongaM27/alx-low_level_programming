#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if character is a digit
 *
 * @c: integer parsed
 *
 * Return: if digit 1 otherwise 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
