#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 * Return: is always 0
 * author - Sila Mulingi [https://www.github.com/IamSila]
 */

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c='a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}

