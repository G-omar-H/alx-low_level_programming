#include "hash_tables.h"
/***/
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i = 0;
    hash_node_t *curr;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i])
        {
            if (ht->array[i]->next)
            {
               
                while (ht->array[i]->next)
                {
                    curr = ht->array[i]->next;
                    while (curr->next)
                    {
                        curr = curr->next;
                        if (!curr->next)
                        {
                            free(curr);
                        }
                    }
                }
            }
            free(ht->array[i]->key);
            free(ht->array[i]->value);
            free(ht->array[i]);
        }
    }
    free(ht->array);
    free(ht);
}