#include "dog.h"




/**
  * init_dog - create a new instance of struct dog and set the values
  * @d: the new instance
  * @name: name of the dog
  * @age: age of the dog
  * @owner: the owner of the dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

