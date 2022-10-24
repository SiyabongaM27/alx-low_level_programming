#include <stdio.h>
#include "main.h"

/**
 * _strlen - return length of a string;
 *
 * @s: string parsed into function
 *
 *Return: int
 */

int _strlen(char *s)
{
int counter;

counter = 0;
while (s[counter] != '\0')
{
counter++;
}
return (counter);
}
