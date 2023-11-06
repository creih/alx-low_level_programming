#include "dog.h"
/**
 * init_dog - initialising the dog structure
 * @d: object of dog struct
 * @name: name given by func call
 * @age: age of dog by func call
 * @owner: owner of dog by func call
 * Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
