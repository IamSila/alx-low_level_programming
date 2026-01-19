#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is: prints the name provides like it is
 * @c: the name provided
 * Return: Nothing
 */

void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: the name of the person
 *
 * Return: Nothing
 */

void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;
	while (name[i])
	{
		if(name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else 
		{
		putchar(name[i]);
		}
		i++;
	}
}

/**
 * main - entry point for the programme
 * Return: Always 0 for success
 */


int main(void)
{
		print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
		return (0);
}

