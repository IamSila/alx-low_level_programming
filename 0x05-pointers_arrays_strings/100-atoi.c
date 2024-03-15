#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 * @s: string to be converted to an integer
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int index_counter, d, n, length, f, digit;

	index_counter = 0;
	d = 0;
	n = 0;
	length = 0;
	f = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (index_counter < length && f == 0)
	{
		if (s[index_counter] == '-')
			++d;

		if (s[index_counter] >= '0' && s[index_counter] <= '9')
		{
			digit = s[index_counter] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[index_counter + 1] < '0' || s[index_counter + 1] > '9')
				break;
			f = 0;
		}
		index_counter++;
	}

	if (f == 0)
		return (0);

	return (n);
}
