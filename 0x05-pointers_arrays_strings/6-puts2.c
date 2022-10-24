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
while (*str != '\0')
{
if (*str % 2 == 0)
{
putchar(*str);
}
str++;
}
putchar('\n');
}
