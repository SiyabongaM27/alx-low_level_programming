#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if character is uppercase
 *
 * @c: character parsed
 *
 * Return: 1 if upper and 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
