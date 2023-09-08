#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 *
 * main - is the entry point of a program
 *
 * Return: is always zero 
 *
 */

int main(void)
{
	int x = '0';
	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
