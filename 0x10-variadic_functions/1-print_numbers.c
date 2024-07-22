#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separates the numbers
 * @n: the index of the number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int index;

	va_start(ag, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ag, int));
		if (index < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ag);
}
