#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: src
 *
 * Return: a character value
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; x <= _strlen(src); x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
