#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98 inlcusive
 * @n: constraint checker
 * Return: Nothing
 * author - Sila Mulingi [https://www.github.com/IamSila]
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
