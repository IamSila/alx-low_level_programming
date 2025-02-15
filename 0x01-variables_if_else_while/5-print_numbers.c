#include <stdio.h>

/**
 * main - print all numbers between 0 and 10
 * Return: is always 0
 * author: Sila Mulingi
 */

int main(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	return (0);
}

