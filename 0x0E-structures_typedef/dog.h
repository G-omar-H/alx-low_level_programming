#ifndef DOG_H
#define DOG_H
/**
 * struct dog - short def
 * @name: dogname
 * @age: dog age
 * @owner: owner name
 * Description: POPPY
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG_H*/
