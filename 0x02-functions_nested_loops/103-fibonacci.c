#include <stdio.h>
#include "main.h"

/**
 *main - Entry point for the program
 *Return: is always 0
 */
int main(void)
{
	unsigned long a = 0, b = 1, next = 0, sum;
	sum = 0;

	while (next < 4000000)
	{
	a = b;
	next = a + b;
	b = next;

		if (next % 2 == 0)
		{
			sum += next;
		}
	}

	printf("lu\n", sum);
	return (0);
}
