#include "main.h"
#include "2-strlen.c"
#include <stdio.h>


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
	for (i = 0; i < length || i == '\0'; i++)
	{
		dest[i] = src[i];
	}
	printf("\n");
	return (dest);
}

