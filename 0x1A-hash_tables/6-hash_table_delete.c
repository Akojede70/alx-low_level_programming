#include "hash_tables.h"

/**
 * free_list - Free a list.
 *
 * @head: Pointer to the head of a linked list
 *
 * Return: Void.
 */

void free_list(hash_node_t *head)
{
	hash_node_t *placeholder_head = NULL;

	if (!head)
		return;

	while (head)
	{
		placeholder_head = head;
		if (head->key)
			free(head->key);
		if (head->value)
			free(head->value);
		head = head->next;
		free(placeholder_head);
	}
}


/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: Pointer to the hash table (hash_table_t *)
 *
 * Return: Void.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t **node = NULL;
	hash_node_t *list = NULL;

	if (!ht)
		return;

	if (!ht->array)
	{
		free(ht);
		return;
	}

	node = ht->array;

	for (; i < ht->size; i++)
		list = node[i], free_list(list);

	free(ht->array);
	free(ht);
}
