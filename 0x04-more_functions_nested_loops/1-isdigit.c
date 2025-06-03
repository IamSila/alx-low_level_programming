#include "main.h"


/**
 * _isdigit - checks if a parameter passed is a digit
 * @c: the parameter to be checked if it is a number
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

