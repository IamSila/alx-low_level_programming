#include "main.h"
#include "2-strlen.c"
#include <stdio.h>


/**
 * print_array - prints x elements of an array
 * @a: the array to store our elements.
 * @n: the number of arrays we need.
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", (*(a + i)));

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
