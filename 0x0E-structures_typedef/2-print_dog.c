#include <stdio.h>
#include "dog.h"


/**
  * print_dog - function to print contents of a truct
  * @d: pointer to a struct
  * Return: Nothing
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else 
	{
		printf("Owner: %s", d->name);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else {
		printf("Owner: %s\n", d->owner);
	}
	printf("Age: %f\n", d->age);
}
