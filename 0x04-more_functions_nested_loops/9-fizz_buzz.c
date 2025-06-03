#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints Fizz or Fuzz or FizzFuzz
 * Return: the above
 * author - Sila Mulingi
 */

void fizz_buzz(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (((number % 3) == 0) && ((number % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((number % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((number % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", number);
		}

		if (number != 100)
		{
			printf(" ");
		}

	}
	printf("\n");
}


/**
 * main - checks the code
 * Return: is always 0
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

