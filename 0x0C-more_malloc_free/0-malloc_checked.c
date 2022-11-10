#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory
 *
 * @b: integer parsed
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
char *p;

p = malloc(b);
if (p == NULL)
exit(98);
}