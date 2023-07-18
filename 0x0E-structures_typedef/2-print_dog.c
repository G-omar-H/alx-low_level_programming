#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print a struct elements
 * @d: dog's init
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
