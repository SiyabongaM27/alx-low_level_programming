#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array
 *
 * @size: integer parsed
 * @c: char parsed
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

if (size == 0)
{
return ('\0');
}

p = malloc(sizeof(char) * size);

if (p == NULL)
{
return ('\0');
}

for (i = 0; i <= size; i++)
p[i] = c;

p[size] = '\0';

return (p);
free(p);
}
