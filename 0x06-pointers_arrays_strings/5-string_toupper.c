#include "main.h"

/**
 * string_toupper - capitalize all letters in string
 * @s: string to manipulate
 * Return: string with all letters capitalized
 */

char *string_toupper(char *s)
{
	int x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 'a' + 'A';
	}
	return (s);
}
