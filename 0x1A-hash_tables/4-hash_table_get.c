#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key you are looking for
 * Return: the value associated with the elemen or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hn;

	if (ht == NULL || key == NULL)
		return (NULL);
	hn = ht->array[key_index((const unsigned char *)key, ht->size)];
	if (hn == NULL)
	{
		return (NULL);
	}
	while (hn)
	{
		if (strcmp((const char *)hn->key, key) == 0)
		{
			return (hn->value);
		}
		hn = hn->next;
	}
	return (NULL);
}
