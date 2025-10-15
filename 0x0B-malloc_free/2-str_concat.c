#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concat s1 and s2 in that order
 * @s1: the first string
 * @s2: the second string
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
	int length = len_s1 + len_s2;
	char *s3 = malloc((length + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);
	/** this acts as the moving cursor; */
	char *temp = s3;

	while (*s1)
		*temp++ = *s1++;

	while (*s2)
		*temp++ = *s2++;

	*temp = '\0';
		return (s3);
}
