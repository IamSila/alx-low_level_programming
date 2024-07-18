#include "main.h"
#include <stdio.h>

/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */

unsigned int _strspn(char *s, char *accept)
{
	int index1;
	int index2;
	unsigned int result = 0;

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; s[index2] != '\0'; index2++)
		{
			if (s[index1] == accept[index2])
			{
				result++;
				break;
			}
		}
		if (s[index2] == '\0')
			return (result);
	}
	return (result);
}
