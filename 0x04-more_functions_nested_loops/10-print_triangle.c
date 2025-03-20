#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle on the console
 * @size: the height and length of the triangle
 * Return: Nothing
 * author - Sila Mulingi [https://www.github.com/IamSila]
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(' ');
			if (j >= k)
			{
				for (k = size; k >= 1; k--)
				{
					_putchar('#');
				}
			}
		}
		_putchar('\n');
	}
}
