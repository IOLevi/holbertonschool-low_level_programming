#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: dog struct pointer
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age != NULL)
		printf("AGE: %.6f\n", d->age);
	else
		printf("AGE: (nil)\n");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");

}
