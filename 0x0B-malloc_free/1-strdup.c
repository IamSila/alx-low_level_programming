#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - return a pointer to a memory location with a string
 * @str: the string to be copied
 * Return: a pointer to the new string
 */

char *_strdup(char *str)
{
	char *new_string;
	int str_size;
	int i = 0;

	str_size = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	/* assigning memory using malloc */
	new_string = (char *)malloc(str_size * sizeof(str));

	/*checking if the allocation happened */
	if (new_string == NULL)
	{
		return (NULL);
	}
	while (i < str_size)
	{
		*(new_string + i) = str[i];
		i++;
	}
	*(new_string + i) = '\0';
	return (new_string);
}
