#include <stdio.h>
#include <wctype.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int));

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise
 */

int is_98(int elem)
{
	return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise
 */

int is_strictly_positive(int elem)
{
	return (elem > 0);
}

/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 * Return: 0 if false, something else otherwise
 */

int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}

/**
 * main - entry point of the programme
 * Return: Always 0 on success
 */

int main(void)
{
	int array[20] = {0, -98, 98, 402, 1024,  4096, -1024, -98, 1, 2, 3, 4, 5, 6,7, 8, 9, 10, 11, 98};
	int index;

	index = int_index(array, 20, is_98);
	printf("%d\n", index);
	index = int_index(array, 20, abs_is_98);
  printf("%d\n", index);
	index = int_index(array, 20, is_strictly_positive);
  printf("%d\n", index);
	return (0);
}


/**
 * int_index - returns a index for the searched value
 * @array: the list of elements to search from
 * @size: the size of the array
 * @cmp: pointer to function checking the elements
 * Return: the index value of the elements
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	/**
	 * array - the array to get elements from
	 * size - the size of the array
	 * cmp - a function which return 0 (false) and 
	 * another number for true
	 *
	 *
	 *
	 */

	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
