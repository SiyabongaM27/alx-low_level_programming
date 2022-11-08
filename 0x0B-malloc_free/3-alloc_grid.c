#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocate memory for a 2D array
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 1st ellement of array
 */

int **alloc_grid(int width, int height)
{
int i;
int **p;

if (width <= 0)
return ('\0');

if (height <= 0)
return ('\0');

p = malloc(sizeof(int *) * height);

if (p == NULL)
return ('\0');

for (i = 0; i < height; i++)
{
p[i] = malloc(sizeof(int) * width);
}

return (p);
}
