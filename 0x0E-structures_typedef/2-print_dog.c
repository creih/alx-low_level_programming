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
		printf("Age: %f\n", d->age);
	else
		printf("Age: nil\n");
	printf("Owner: %s\n", (d->owner) ? d->owner : "nil");
}
