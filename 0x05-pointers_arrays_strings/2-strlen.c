#include "main.h"


/**
 * _strlen - checks the length of a string
 *
 *
 * @s: this is the string to check
 *
 *
 *
 * Return: int length of the string
 *
 *
 *
 * in this case sl is var name for the string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
