#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: given key
 * @value: given value
 *
 * Return: 1 (Success) | 0 (Failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	/* update key if it already exists */
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
		{
			node->key = (char *)value;
			return (1);
		}
		node = node->next;
	}

	/* otherwise, add new element */
	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->key = (char *)key, node->value = (char *)value;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
