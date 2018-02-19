#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees the doge from the heap
 * @d: pointer to dog that needs to be free
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
