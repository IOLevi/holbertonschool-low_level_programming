#ifndef BALLAH
#define BALLAH
/**
 * struct dog - it's a doge
 * @name: name of doge
 * @age: age of doge
 * @owner: owner of doge
 *
 * Description: doge.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
