#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: the integer whose last digit is printed
 * Return: Value of the last digit
 *
 * author: Sila Mulingi [https://www.github.com/IamSila]
 */

int print_last_digit(int a)
{
	/**
	 * if we mod a num by 10, we get the last digit
	 */
	int mod;


	if (a >= 0)
	{
		mod = a % 10;
		_putchar('0' + mod);
	}
	else
	{
		mod = -(a % 10);
		_putchar('0' + mod);
	}
	return (mod);
}

