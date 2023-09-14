#include "main.h"

/**
 * main - entry point for the program
 *
 * Return - value is always 0
 *
 * @c - the variable to check
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
