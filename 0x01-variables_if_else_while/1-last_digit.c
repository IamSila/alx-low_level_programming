#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - check the code
 * Return: is always 0
 */

int main(void)
{
	int n;
	int lastDgit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */


	lastDgit = n % 10;

	if (lastDgit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDgit);
	}
	if (lastDgit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDgit);
	}
	if ((lastDgit < 6) && (lastDgit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 but not 0\n", n, lastDgit);
	}
	return (0);
}

