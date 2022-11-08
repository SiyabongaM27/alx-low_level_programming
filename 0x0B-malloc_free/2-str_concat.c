#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: string parsed
 * @s2: string parsed
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
int len1, len2, len, i, j;
char *p;

len1 = 0;
while (s1[len1] != '\0')
len1++;

len2 = 0;
while (s2[len2] != '\0')
len2++;

len = len1 + len2 + 1;

p = malloc(sizeof(char) * len);

if (p == NULL)
return (0);

for (i = 0; i < len1; i++)
{
p[i] = s1[i];
}

for (j = 0; j < len2; j++)
{
p[len1 + j] = s2[j];
}

p[len - 1] = '\0';

return (p);
}
