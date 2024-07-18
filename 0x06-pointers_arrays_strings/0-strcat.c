#include "main.h"

/**
 * _strcat - is a block of code that concatenates two strings
 * @dest: string to be appended to
 * @src: string that is being appended
 * Return: the whole concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
