#include <stdio.h>
#include "main.h"

/**
 * main - print sum of all even fibonacci numbers under 4x10^6
 *
 * Return: Nothing.
 */

int main(void)
{
	unsigned long a, b, next, sum;

	next = 0;
	a = 0;
	b = 1;
	sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;

		if (next % 2 == 0)
			sum += next;
	}

	printf("%lu\n", sum);
	return (0);
}
