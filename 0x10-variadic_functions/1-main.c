#include "variadic_functions.h"




/**
 * main - the entry point of the function.
 * Return: always 0 on success
 */



int main(void)
{
    print_numbers(", ", 4, 0, 98, 1024, 402);
    print_numbers("; ", 5, 30, 938, -123024, 43402, 0);
    print_numbers("; ", 1, 30);
    return (0);
}
