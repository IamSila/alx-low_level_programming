#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>




/**
 * print_numbers - prints all its parameters.
 * @separator: the string to be printed after each number.
 * @n: the number of numbers to print.
 * Return: the numbers, integer.
 */





void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int x;

    va_start(args, n);
    for (x = 0; x < n; x++)
    {
        if (!separator)
        {
            printf("%d", va_arg(args, int));
        }
        else 
        {
            printf("%d", va_arg(args, int));
            if (x != n - 1)
            {
                printf("%s", separator);
            }
        }
    }
    va_end(args);
    printf("\n");
}
