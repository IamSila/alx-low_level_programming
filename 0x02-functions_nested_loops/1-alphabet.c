#include "main.h"

/**
 * print_alphabet - print the alphabets in lowercase
 * Return: nothing
 * author - Sila Mulingi [https://www.github.com/IamSila]
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

