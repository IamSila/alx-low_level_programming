#include "main.h"
#include "2-strlen.c"


/**
 * _strcpy - copies one string into another
 * @dest: final string
 * @src - source string to copy from
 */

char *_strcpy(char *dest, char *src)
{
	int length;
	int i;
	

	length = _strlen(src);
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

