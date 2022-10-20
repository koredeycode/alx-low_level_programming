#include "hash_tables.h"
/**
 * key_index - return the key index to the key
 * @key: a str, the key
 * @size: size of the hash table
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
