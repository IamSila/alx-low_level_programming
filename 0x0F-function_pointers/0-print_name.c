#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints the name passed to a function
* @name: the name to print
* @f: memory location for the function printing name
* Return: void
*/


void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}

