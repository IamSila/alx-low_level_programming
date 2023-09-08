#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - the entry point of the program
 *
 *
 * Return: is always zero
 *
 */

int main(void)
{
char z;

for (z = 'z'; z >= 'a'; z--)
{
	putchar(z);
}
putchar('\n');

return (0);
}
