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
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
