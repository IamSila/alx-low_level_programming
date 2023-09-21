#include "main.h"

/**
 * cap_string - capitalize first letter of each word
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s)
{
	int a = 0;

	if (s[a] >= 'a' && s[a] <= 'z')
		s[a] = s[a] - 'a' + 'A';
	a++;

	while (s[a] != '\0')
	{

		if ((s[a] >= 'a' && s[a] <= 'z')
				&& (s[a - 1] == ',' || s[a - 1] == ';' || s[a - 1] == '.' ||
					s[a - 1] == '!' || s[a - 1] == '?' || s[a - 1] == '"' ||
					s[a - 1] == '(' || s[a - 1] == ')' || s[a - 1] == '{' ||
					s[a - 1] == '}' || s[a - 1] == ' ' || s[a - 1] == '\t'
					|| s[a - 1] == '\n'))
			s[a] = s[a] - 'a' + 'A';
		a++;
	}

	return (s);
}
