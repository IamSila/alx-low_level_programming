#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - variadic function to calculate
 * the sum of all its parameters.
 * @n: the count of the parameters.
 * Return: Integer which the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	int results;

	va_start(args, n);

	results = 0;

	for (x = 0; x < n; x++)
	{
		results += va_arg(args, int);
	}

	va_end(args);

	return (results);
}







/**
 * main - the entry point of the program
 * Return: Always 0 for success.
 */

int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 1024);
	printf("%d\n", sum);
	sum = sum_them_all(4, 98, 1024, 402, -1024);
	printf("%d", sum);
	return (0);
}
