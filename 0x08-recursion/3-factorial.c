#include "main.h"

/**
 * factorial - give fucktorial of numbmer
 * @x: number to use
 * Return: returns factor or -1
 */

int factorial(int x)
{
	if (x < 0)
	return (-1);
	if (x > 0)
	return (x * factorial(x - 1));
	return (1);
}
