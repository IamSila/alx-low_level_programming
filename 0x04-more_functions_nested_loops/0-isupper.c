#include "main.h"


/**
 * _isupper - checks if a character is uppercase
 * @c: the character being checked
 * Return: Always 0
 * author - Sila Mulingi [https://wwww.github.com/IamSila]
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

