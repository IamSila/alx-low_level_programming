#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -checks malloc
 * @b: int to check
 * Return: pointer or void
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
