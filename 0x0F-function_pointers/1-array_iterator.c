#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a param
 * @array: array
 * @size: array size
 * @action: A pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
