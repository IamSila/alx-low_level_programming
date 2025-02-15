#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 * Return: is always 0
 * author: Sila Mulingi
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}

