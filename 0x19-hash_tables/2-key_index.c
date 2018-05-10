#include "hash_tables.h"
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ki;

	ki = hash_djb2(key) % size;

	return (ki);
}
