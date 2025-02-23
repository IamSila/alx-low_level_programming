#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: int representing the ascii value for a character
 * Return: 1 if is alphabet small or capital
 * author - Sila Mulingi [https://www.github.com/IamSila]
 */

int _isalpha(int c)
{
	/**
	 * small (97 - 122)
	 * capital (65 - 90)
	 */
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

