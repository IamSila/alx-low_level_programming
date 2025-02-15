#include <stdio.h>

/**
 * main - prints the alphabets from a to z in one line
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

