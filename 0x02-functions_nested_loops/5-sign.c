#include "main.h"


/**
 * print_sign - prints the sign of a integer value
 * @n: the integer whose sign in is cheked
 * Return: 1 for positive int, 0 for 0 and -1 for a negative number
 *
 * author: Sila Mulingi [https://www.github.com/IamSila]
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}

