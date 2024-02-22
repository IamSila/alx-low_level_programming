#include <stdio.h>
#include "main.h"

/**
 *main - Entry point for the program
 *Return: is always 0
 */
int main(void)
{
	unsigned long a = 0, b = 1, next;
	int i, sum = 0;

	for (i = 0; i <= 50; i++)
	{
	a = b;
	next = a + b;
	b = next;

	if (next <= 4000000)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}
	}

	}
	printf("%d\n", sum);
	return (0);
}
