#include "dog.h"
/**
 * init_dog - introduce a new struct dog type variable
 * @d: varible to init
 * @name: name of the dog
 * @age: of the dog
 * @owner: owner's name
 * Return: void
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
