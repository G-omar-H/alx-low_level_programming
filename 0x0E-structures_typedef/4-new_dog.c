#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - count string's lenght
 * @str: stting to count
 * Return: sring's lenght
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i += 1;
	return (i);
}
/**
 * _strcopy - copy string elem into another string
 * @dest: string to get concatinated
 * @str: string to copy
 * Return: the concatinated string
 */
char *_strcopy(char *dest, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - introduce a new dog
 * @name: name of the new dog
 * @age: of the new dog
 * @owner: of the new dog
 * Return: struct pointer dog
 *	NULL if fail.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!(name) || age < 0 || !(owner))
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
