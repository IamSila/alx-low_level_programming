/**
 * file name - 0-suma_them_all
 * author: Sila Mulingi
 */

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all the additional argumetns
 * @n: number of arguments to count
 * Return: the sum of the optional arguments
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
	if (sum < 0)
	{
		return (-(sum));
	}
	va_end(ag);
	return (sum);
}
