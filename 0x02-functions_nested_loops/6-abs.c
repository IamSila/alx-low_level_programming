#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: the number to calculate abs value for
 * Return: the absolute value of the integer
 *
 * author - Sila Mulingi [https://www.github.com/IamSila]
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else if (a == 0)
	{
		return (0);
	}
	else
	{
		return (a);
	}
}

