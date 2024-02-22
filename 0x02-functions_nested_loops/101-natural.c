#include <stdio.h>
#include "main.h"

/**
 *main - Entry point for the function
 *Return: is always 0
 */

int main(void)
{
	int x;
	int sum = 0;

	for (x = 0; x < 1024; x++)
	{
	if (x % 3 == 0 || x % 5 == 0)
	{
		sum += x;
	}

	}
	printf("%d", sum);
	printf("\n");
	return (0);

}

