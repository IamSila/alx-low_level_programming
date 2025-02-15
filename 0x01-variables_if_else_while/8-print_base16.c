#include <stdio.h>

/**
 * main - prints all base 16 numbers in lowercace
 * Return: Always 0
 * author: Sila Mulingi
 */

int main(void)
{
	int number;
	char letter;

	number = 48;
	letter = 'a';

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

