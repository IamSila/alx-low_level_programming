#include <stdio.h>

/**
 * main - print all possible combinations of two numbers
 * Return: Always 0
 * author: Sila  Mulingi
 */

int main(void)
{
	int i; /* the outer number */
	int j; /* the inner number */

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

