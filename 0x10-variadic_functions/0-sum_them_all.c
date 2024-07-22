#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ag;
	unsigned int index;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(ag, n);
	sum = 0;

	for (index = 0; index < n; index++)
	{
		sum += va_arg(ag, int);
	}
	va_end(ag);
	return (sum);
}
