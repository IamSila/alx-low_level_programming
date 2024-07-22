#include "variadic_functions.h"

/**
 * print_strings - prints the strings
 * @separator: separates the strings
 * @n: iterates through the strings
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int index;

	va_start(ag, n);

	for (index = 0; index < n; index++)
	{
		if (separator == NULL)
		{
			printf(va_arg(ag, char *));
		}
		printf(va_arg(ag, char *));
		if (index < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ag);
}
