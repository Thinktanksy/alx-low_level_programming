#include <stdio.h>
#include <stdlib.h>
#include "./hash_tables"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp != NULL)
				printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
