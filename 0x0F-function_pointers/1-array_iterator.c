#include <stdio.h>
#include "function_pointers.h"


/**
  * array_iterator - prints the elements of an array
  * @array: the array holding the elements
  * @size: number of elements in the array
  * @action: function pointing to the function printing elements
  * Return: Nothing
  */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
