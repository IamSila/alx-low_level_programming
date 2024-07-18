#include "main.h"

/**
 * _strncat - this is a funtion that concatenates two strings
 *
 * @dest: this  variable contains the string to be appended to
 * @src: the source of the string to be appended
 * @n: append n number of bytes of the string in this case
 *
 * Return: concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != src[n])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
