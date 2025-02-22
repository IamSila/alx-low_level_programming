#include "main.h"
/**
 * print_alphabet_x10 - prints the all alphabets in lowercase 10x
 * Return: nothing
 * author - Sila Muling [https://www.github.com/IamSila]
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;


	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

