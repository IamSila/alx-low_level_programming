#include <stdio.h>

/**
 * main - prints lowercase characters in reverse
 * Return: Always 0
 * author: Sila Mulingi
 */

int main(void)
{
	char lowercase;

	lowercase = 'z';
	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}
	putchar('\n');
	return (0);
}

