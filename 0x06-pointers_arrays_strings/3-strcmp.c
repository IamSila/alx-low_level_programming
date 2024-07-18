#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*(s1 + a) == *(s2 + a) && *(s1 + a))
		a++;
	if (*(s2 + a))
		return (*(s1 + a) - *(s2 + a));
	else
		return (0);
}
