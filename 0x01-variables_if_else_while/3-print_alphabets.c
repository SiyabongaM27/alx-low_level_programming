#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c, uc;

c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}

uc = 'A';
while (uc <= 'Z')
{
putchar(uc);
uc++;
}
putchar('\n');
return (0);
}
