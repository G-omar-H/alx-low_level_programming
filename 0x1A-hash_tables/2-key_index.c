#include "hash_tables.h"
/**
 * key_index - function that gives the index o a key
 * @key: the  key name to compute
 * @size: size of the hash table
 * Return: index at wich the key/value pair should be
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;

	i += hash_djb2(key);
	return  (i % size);
}
