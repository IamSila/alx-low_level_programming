#include <stdio.h>
#include "main.h"

/**
 * main - entry point for the program
 * Return: is always 0
 */

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}

