#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @n: the length of the line
 * Return: Nothing
 * author - Sila Mulingi[https://www.github.com/IamSila]
 */

void print_line(int n)
{
	/* test case
	 * if n is 2 then __
	 *
	 *
	 */

	int length;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (length = 1; length <= n; length++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

