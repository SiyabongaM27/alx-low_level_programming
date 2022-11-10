#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: int nmemb
 * @size: int parsed
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;

/* return null if parameters are 0 */
if (nmemb == 0 || size == 0)
{
return ('\0');
}

/* allocate memory for an array of size (size) and length of (nmemb) */
p = malloc(sizeof(size) * nmemb);

/* return null if malloc fails */
if (p == NULL)
{
return ('\0');
}

return (p);
}
