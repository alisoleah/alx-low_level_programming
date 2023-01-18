#include "function_pointers.h"

/**
 * int_index - Searches for an integer 
 * @array: array
 * @size: array size
 * @cmp: A pointer to function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (index);
	}

	return (-1);
}
