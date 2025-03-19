#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14, 10 times
 * Return: Nothing
 * author - Sila Mulingi [https://www.github.com/IamSila]
 */

void more_numbers(void)
{
	int number;
	int i;
	int num1, num2;

	for (i = 0; i <= 9; i++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
				num1 = number / 10;
				num2 = number % 10;
				_putchar(num1 + '0');
				_putchar(num2 + '0');
			}
			else
			{
				_putchar(number + '0');
			}
	
	}
		_putchar('\n');
	}
}

