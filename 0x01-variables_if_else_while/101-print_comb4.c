#include <stdio.h>

/**
 * main - print all possible combinations of three numbers
 * Return: Always 0
 * author: Sila  Mulingi
 */

int main(void)
{
	int i; /* the outer number */
	int j; /* the inner number */
	int k; /* the third number */

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < '7')
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');

	return (0);
}


