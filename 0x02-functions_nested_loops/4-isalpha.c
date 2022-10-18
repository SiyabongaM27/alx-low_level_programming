#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if character is part of the alphabet
 *
 * @c: The integer parsed
 *
 * Return: 1 if alphabetic otherwise 0
 */

int _isalpha(int c)
{
if (c <= 122 && c >= 65)
{
return (1);
}
else
{
return (0);
}
}
