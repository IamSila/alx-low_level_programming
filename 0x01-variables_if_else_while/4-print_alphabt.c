#include <stdio.h>

/**
 * main - prints the alphabets from a to z except q and e
 * Return: is always 0
 * author: Sila Mulingi
 */

int main(void)
{
	char small;

	small = 'a';
	while (small <= 'z')
	{
		if (small != 'q' && small != 'e')
			putchar(small);
		small++;
	}
	putchar('\n');
	return (0);
}

