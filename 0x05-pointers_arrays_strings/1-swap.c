#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap values of two integers using pointers
 *
 * @a: pointer parsed
 * @b: pointer parsed
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int valueB = *b;
int valueA = *a;
*b = valueA;
*a = valueB;
}
