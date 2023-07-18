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
		if (d->name == NULL)
		{
			printf("name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
		}
		else if (!(d->age))
		{
			printf("name: %s\nAge:(nil)\nOwner: %s\n", d->name, d->owner);
		}
		else if (d->owner == NULL)
		{
			printf("name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
		}
		else
			printf("name: %s\nAge: %f\nOwner: %s\n",d->name, d->age, d->owner);
	}
}
