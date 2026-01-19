#include <stdio.h>
#include "function_pointers.h"

/*
 * int_index - returns the index of a value in an array
 * @array: the array with the element
 * @size: the number of elements in the array
 * @cmp: pointer to a function returning an element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	for (i = 0; i < size; i++)
	{
		if(cmp(array[i]) != 0)
		{
			return i;
		}
	}
	return -1;
}

