#include "main.h"
#include <stdio.h>


/**
 * main - checks the main code
 * Return: Always 0
 * author - Sila Mulingi [https://www.github.com/IamSila]
 */


int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c='a';
	printf("%c: %d\n", c, _isupper(c));


	return (0);
}

