#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char c;
int i;
long int li;
long long int l;
float f;
char string[] = "byte(s)";

printf("Size of a char: %lu %s\n", (unsigned long)sizeof(c), string);
printf("Size of an int: %lu %s\n", (unsigned long)sizeof(i), string);
printf("Size of a long int: %lu %s\n", (unsigned long)sizeof(li), string);
printf("Size of a long long int: %lu %s\n", (unsigned long)sizeof(l), string);
printf("Size of a float: %lu %s\n", (unsigned long)sizeof(f), string);
return (0);
}
