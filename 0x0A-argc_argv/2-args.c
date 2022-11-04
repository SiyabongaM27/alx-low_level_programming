#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: counter
 * @argv: arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i <= argc - 1; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
