#include <stdio.h>
#include "main.h"

/**
 * rev_string - print string in reverse
 *
 * @s: string parsed to function
 *
 * Return: void
 */

void rev_string(char *s)
{
int i, j;
char c[100];

i = 0;
j = 0;
while (s[i])
{
c[i] = s[i];
i++;
}

i -= 1;
while (i >= 0)
{
s[i] = c[j];
j++;
i--;
}
}
