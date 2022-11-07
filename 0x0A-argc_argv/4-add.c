#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: counter
 * @argv: arguments
 *
 * Return: 0 otherwise 1
 */

int main(int argc, char *argv[])
{
int i;
int result;

if (argc == 0)
{
printf("0\n");
}

for (i = 1; i < argc - 1; i++)
{
if (atoi(argv[i]) % 10)
{
result += atoi(argv[i]);
}
else
{
printf("Error\n");
return (0);
}
printf("%d\n", result);
}

return (0);
}
