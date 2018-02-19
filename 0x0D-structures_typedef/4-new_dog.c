#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *new_dog - creates a new doge
 * @name: can haz name
 * @age: i haz age
 * @owner: can haz cheeseburger...er, owner.
 *
 * Return: pointer to doge lul
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;
	char *newName;
	char *newOwner;
	int lenname = 0;
	int lenowner = 0;
	int i;

	doge = malloc(sizeof(struct dog));
	if (!doge)
		return (NULL);

	while (owner[lenowner] != 0)
		lenowner++;

	while (name[lenname] != 0)
		lenname++;

	newOwner = malloc(sizeof(char) * (lenowner + 1));
	if (!newOwner)
		return (NULL);

	newName = malloc(sizeof(char) * (lenname + 1));
	if (!newName)
		return (NULL);

	for (i = 0; owner[i] != 0; i++)
		newOwner[i] = owner[i];
	newOwner[i] = '\0';

	for (i = 0; owner[i] != 0; i++)
		newName[i] = name[i];
	newName[i] = '\0';

	doge->name = newName;
	doge->age = age;
	doge->owner = newOwner;

	return (doge);
}
