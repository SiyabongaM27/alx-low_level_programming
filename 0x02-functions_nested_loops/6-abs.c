#include <stdio.h>
#include "main.h"

/**
 * _abs - Prints out absolute value of a number
 *
 * @n: integer parsed
 *
 * Return: 0
 */

int _abs(int n)
{

if (n < 0)
{

int result;

result = n * -1;
return (result);
}
else
{
return (n);
}
}
