#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lower case characters
 *
 * Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{

if (c <= 122 && c >= 97)
{
return (1);
}
else 
{
return 0;
}

}
