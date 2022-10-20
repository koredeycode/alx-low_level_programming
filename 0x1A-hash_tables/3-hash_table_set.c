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
	unsigned long int size = ht->size;
	unsigned long int idx = key_index((const unsigned char *)key, size);
	hash_node_t *ins/*= malloc(sizeof(hash_node_t))*/;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	ins = malloc(sizeof(hash_node_t));
	if (ins == NULL)
		return (0);
	ins->key = (char *)key;
	ins->value = (char *)value;
	ins->next = NULL;
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = ins;
		return (1);
	}
	else/*slot not empty*/
	{
		if (strcmp(ht->array[idx]->key, key) == 0)/*slot key=key,change the val*/
		{
			ht->array[idx]->value = (char *)value;
			return (1);
		}
		else/*slot key is not key but same idx, collision, add to the linked list*/
		{
			tmp = ht->array[idx];
			while (tmp)
			{
				if (strcmp(tmp->key, key) == 0)
				{
					tmp->value = (char *)value;
					return (1);
				}
				tmp = tmp->next;
			}
			tmp = ht->array[idx];
			ins->next = tmp;
			ht->array[idx] = ins;
			return (1);
		}
	}
	return (0);
}
