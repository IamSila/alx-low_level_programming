#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * puts_half - Prints one half of a string
 * @str: the string we work with
 * Return: Nothing
 */

void puts_half(char *str)
{
	int length;
	int half_length;
	int i;


	length = _strlen(str);
	if (length % 2 == 0)
	{
		half_length = length / 2;
	}
	else
	{
		half_length = (length - 1) / 2;
	}
	for (i = half_length; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
