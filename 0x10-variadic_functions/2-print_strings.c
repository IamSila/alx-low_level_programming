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
	char *string;

	va_start(ag, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(ag, char *);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");


		if (index < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ag);
}
