#include "main.h"

/**
 * _strlen_recursion - lenth of string
 * @s: string of count
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x = _strlen_recursion(s + 1);
		return (x += 1);
	}
	return (0);
}
