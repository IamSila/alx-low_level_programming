#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name passed to it
 * and calls a function passed to it
 * @name: name to print
 * @f: a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}


