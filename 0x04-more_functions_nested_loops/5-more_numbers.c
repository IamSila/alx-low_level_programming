#include "main.h"
#include <stdio.h>


/**
 * more_numbers - prints numbers 0 to 14, 10 times
 * Return: Nothing
 * author - Sila Mulingi [https://www.github.com/IamSila]
 */

void more_numbers(void)
{
	int number;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10 && number <= 14)
			{
				_putchar(number / 10 + '0');
				_putchar(number % 10 + '0');
			}
			else
			{
				_putchar(number + '0');
			}
		}
		_putchar('\n');
	}
}

