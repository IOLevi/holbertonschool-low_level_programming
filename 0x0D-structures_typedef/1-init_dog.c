#include "dog.h"

/**
 * init_dog - initializes a dog struct
 * @d: dog struct pointer
 * @name: name of doge
 * @age: age of doge
 * @owner: owner of doge
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
