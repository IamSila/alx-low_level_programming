#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: Nothing
 * author - Sila Mulingi
 */

void print_diagonal(int n)
{
	int i;
	int diagonal_line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			diagonal_line = 1;
			while (diagonal_line <= i)
			{
				if (diagonal_line != 1)
				{
					_putchar(' ');
				}
				diagonal_line++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

