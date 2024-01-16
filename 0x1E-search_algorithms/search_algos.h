#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

/**prototypes**/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
