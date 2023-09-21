#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

	int arow, tech = 0;
	int end_file = n - 1;

	while (tech < end_file)
	{
		arow = *(a + tech);
		*(a + tech) = *(a + end_file);
		*(a + end_file) = arow;
		tech++, end_file--;
	}
}
