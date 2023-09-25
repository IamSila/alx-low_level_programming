#include "main.h"

/**
 * _memset - the function sets memory to array
 * @s: array 
 * @b: value to set it as
 * @n: the number of  of times
 * Return: value of s which is a char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
