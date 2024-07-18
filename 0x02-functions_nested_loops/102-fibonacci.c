#include <stdio.h>
#include "main.h"

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
 */

int main(void)
{
	int count;
	unsigned long a, b, next;

	a = 0;
	b = 1;

	for (count = 1; count <= 49; count++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu, ", next);
	}

	printf("%lu\n", next + a);
	return (0);
}
