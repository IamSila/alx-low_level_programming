#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings provided as parameters.
 * @separator: string printed between the strings.
 * @n: number of strings provided to the function.
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...){
    va_list args;
    unsigned int x;
    char *str;

    va_start(args, n);

    for (x = 0; x < n; x++)
    {
        str = va_arg(args, char *);
        if (!str)
        {
            str = "nil";
        }
        if (!separator)
        {
            printf("%s", str);
        }
        else
        {
            printf("%s", str);
            if (x < n - 1)
            {
                printf("%s", separator);
            }
        }

    }
    va_end(args);
    printf("\n");
}

