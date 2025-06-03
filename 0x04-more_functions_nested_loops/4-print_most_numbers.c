#include "main.h"


/**
 * print_most_numbers - prints all numbers apart from 2 and 4
 * Return: Nothing
 * author - Sila Mulingi [https://www.github.com/IamSila]
 */

void print_most_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == '2' || number == '4')
		{
			continue;
		}
		_putchar(number);
	}
	_putchar('\n');
}

