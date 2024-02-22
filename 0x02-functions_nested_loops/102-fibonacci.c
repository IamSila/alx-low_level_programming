#include <stdio.h>

/**
 * main - Entry point for the progam
 * @n: hold the limit for the fibonacci numbers
 * Return: value is 0
 *
*/

void generateFibonacci(int n)
{
	int a = 1, b = 2, next, i;

	printf("Fibonacci Series of the first %d numbers:\n", n);

	for (i = 0; i < n; ++i)
{
	printf("%d", a);

	if (i < n - 1)
	{
		printf(", ");
	}

	next = a + b;
	a = b;
	b = next;
	}

	printf("\n");
}

int main(void)
{
	int n = 50;

	generateFibonacci(n);

	return (0);
}
