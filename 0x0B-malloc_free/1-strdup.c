#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 *
 * @str: string parsed - to be duplicated
 *
 * Return: char
 */

char *_strdup(char *str)
{
int len, i;
char *p;

if (str == NULL)
return ('\0');

len = 0;

while (*(str + len) != '\0')
{
len++;
}

len++;

p = malloc(sizeof(*str) * len);

if (p == NULL)
return ('\0');

i = 0;
while (i < len)
{
p[i] = *(str + i);
i++;
}

p[i] = '\0';

return (p);
}
