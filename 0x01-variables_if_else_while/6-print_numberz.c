#include <stdio.h>

/**
 * main - print numbers 0 to 9 using char method
 * Return: is always 0
 * author: Sila Mulingi
 */

int main(void)
{
	int number;

	number = 48;
	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}

