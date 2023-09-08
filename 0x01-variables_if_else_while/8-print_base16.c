#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point of the programme
 *
 * Return: always zero
 *
 */


int main(void)
{
char x;

for (x = '0'; x <= '9'; ++x)
{
	putchar(x);
}
for (x = 'a'; x <= 'f'; ++x)
{
	putchar(x);
}
putchar('\n');

return (0);
}
