#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name: takes in a function and passes the name provided as arg[1] to the accepted function
 * @name: the name of the person
 * 
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

