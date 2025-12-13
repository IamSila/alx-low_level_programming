#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees the memory held by dog structure
  * @d: pointer to the struct
  * Return: Nothing
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
