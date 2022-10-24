#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every two characters
 *
 * @str: string parsed
 *
 * Return: void
 */

void puts2(char *str)
{
int i, j;
i = 0;
while (str[i] != '\0')
{
i++;
}
for (j = 0; j < i; j += 2)
{
putchar(str[j]);
}
putchar('\n');
}
