#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int len1, len2, len, i;
unsigned int j;
char *p;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

len1 = 0;
while (s1[len1] != '\0')
len1++;

len2 = 0;
while (s2[len2] != '\0')
len2++;

len = len1 + n + 1;

p = malloc(sizeof(char) * len);

if (p == NULL)
return (0);

for (i = 0; i < len1; i++)
{
p[i] = s1[i];
}

for (j = 0; j < n; j++)
{
p[len1 + j] = s2[j];
}

p[len - 1] = '\0';

return (p);
}

int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
