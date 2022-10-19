#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Void
 *
 * Return: void
 */

void jack_bauer(void)
{
int hours, minutes;

hours = 24;
minutes = 59;
for (int i = 0; i < hours; i++)
{
for (int j = 0; j < minutes; j++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar('\n');
}
}
}
