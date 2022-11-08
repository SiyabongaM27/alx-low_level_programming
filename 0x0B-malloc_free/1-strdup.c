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
int i, len;
char *p;

if (str == NULL)
return ('\0');

i = 0;
len = 0;

while (str[len] != '\0')
{
len++;
}

p = malloc(sizeof(char) * len+1);

if (p == NULL)
return ('\0');

while (*str != '\0')
{
*(p+1) = *(str+1)
}

return (p);
free(p);
}

int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
