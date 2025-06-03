#include <stdio.h>

/**
 * swap_int - swaps the value of two integer values.
 * @a: the first value
 * @b: the second value to be swapped.
 * Return: int of the returned values.
 */

int swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
	return (0);
}

