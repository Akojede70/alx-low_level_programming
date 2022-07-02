#include "hash_tables.h"

/**
 * hash_table_print - Print all the hash table (include array and list)
 *
 * @ht: Pointer to the hash table (hash_table_t *)
 *
 * Return: Void.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int counter = 0;
	hash_node_t **arr = NULL;
	hash_node_t *nodes = NULL;

	if (!ht || !ht->array)
		return;

	arr = ht->array;

	printf("{");

	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			counter++;
			if (counter == 2)
				printf(", "), counter = 1;
			printf("'%s': '%s'", arr[i]->key, arr[i]->value);
			nodes = arr[i]->next;
			if (nodes)
			{
				printf(", ");
				for (; nodes; nodes = nodes->next)
				{
					printf("'%s': '%s'", nodes->key, nodes->value);
					if (nodes->next)
						printf(", ");
				}
			}
		}
	}
	printf("}\n");
}
