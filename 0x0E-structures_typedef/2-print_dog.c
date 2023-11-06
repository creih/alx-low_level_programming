#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print watever is initialised in struct vars
 * @d: pointer to struct vars
 * Return: NULL
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", (d->name) ? d->name : "nil");
	if (d->age)
		printf("Age: %f", d->age);
	else
		printf("Age: nil");
	printf("Name: %s\n", (d->owner) ? d->owner : "nil");
}
