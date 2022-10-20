#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key
 * @value: the value
 * Return: 1 on success or 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *ins;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	if (tmp)
	{
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}

	ins = malloc(sizeof(hash_node_t));
	if (ins == NULL)
		return (0);
	ins->key = strdup(key);
	ins->value = strdup(value);
	ins->next = NULL;
	if (ht->array[idx] != NULL)
		ins->next = ht->array[idx];
	ht->array[idx] = ins;
	return (1);
}
