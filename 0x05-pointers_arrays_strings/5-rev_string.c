#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - Reverses a string (last - first)
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int length;
	int i;
	char x;

	length = _strlen(s);
	for (i = 0; i < length / 2; i++)
	{
		x = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = x;
	}
}

