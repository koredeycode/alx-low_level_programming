#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of the hash_table
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ret = malloc(sizeof(hash_table_t));

	if (ret == NULL)
		return (NULL);
	ret->size = size;
	ret->array = malloc(sizeof(hash_node_t *) * size);
	if (ret->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ret->array[i] = NULL;
	}
	return (ret);
}
