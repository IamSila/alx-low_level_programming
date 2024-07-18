#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int index;

	unsigned int sum, sum_1;

	sum = 0;
	sum_1 = 0;

	for (index = 0; index < size; index++)
	{
		sum += a[(size * index) + index];
		sum_1 += a[(size * (index + 1)) - (index + 1)];
	}

	printf("%d, %d\n", sum, sum_1);
}
