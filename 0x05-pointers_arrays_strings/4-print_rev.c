#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int length;
	int i;

	length = _strlen(s);
	for (i = (length - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

