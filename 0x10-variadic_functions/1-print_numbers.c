#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int x;

    va_start(args, n);
    for (x = 0; x < n; x++)
    {
        printf("%d", va_arg(args, int));
        if (x != n - 1)
        {
            printf("%s", separator);
        }
    }
    printf("\n");
    va_end(args);
}
