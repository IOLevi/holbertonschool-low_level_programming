#include "hash_tables.h"

/**
 * key_index - get the key index from hash
 * @key: key
 * @size: number of buckets
 * Return: key index
 */
unsigned long int key_index(const char *key, unsigned long int size)
{
	unsigned long int ki;

	ki = hash_djb2(key) % size;

	return (ki);
}
