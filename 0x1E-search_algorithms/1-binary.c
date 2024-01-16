#include "search_algos.h"
/**
 * binary_search - find an element into a sorted array
 * @array: pointer to the first element of a list
 * @size: size of the array
 * @value: value to search for
 * Return: index of the element where value, -1 if unseccessful
 */
int binary_search(int *array, size_t size, int value)
{
    size_t i, j, l = size - 1, m = l / 2;
    size_t  t = m;
    if (array && array[0] <= array[l])
    {
        printf("Searching in array: " );
        for (i = 0; i < size - 1 && array[i] >= 0; i++)
        {
            printf("%d, ", array[i]);
            if (i == size - 2)
            {
                printf("%d\n", array[i + 1]);
                break;
            }
        }
        if (value == array[m])
        {
            printf("Found %d at index: %ld", array[m], t);
            return (t);
        }
        else if (value < array[m])
            t = t + binary_search(array, m, value);
        else
        {
            j = m + 1;
            for (i = 0; i < size; i++)
            {
                if (array[j])
                {
                    array[i] = array[j];
                    j++;
                }
                else
                    array[i] = -1;
            }
            t = t - binary_search(array, m + 1, value);
        }
    }
    return (-1);
}