#include "main.h"

/**
 * _islower - checks if if character is lowercase
 * Return: always 1 if letter lowercase and 0 otherwise
 * author - Sila Mulingi [https://www.github.com/IamSila]
 */


int _islower(int c)
{
	/**
	 * c is the value
	 * ascii lowercase star at 97 and end at 122
	 */

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
}

