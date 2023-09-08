#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-entry point for the proram
 *
 * Return: is always 0
 *
 */


int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
