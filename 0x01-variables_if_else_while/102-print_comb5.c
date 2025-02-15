#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers.
 * Return: always 0
 * author: Sila Mulingi
 */

int main(void)
{
	int i; /* the first and digit*/
	int j; /* the second digit */
	int k; /* the third digit */
	int l; /* the fourth digit */

	for (i = '0'; i <= '9'; i++)
	{
		for (j ='0'; j <= '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				for (l = j + 1; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}

