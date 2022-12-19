#include "main.h"

/**
 * swap_int - swap integers
 *@a: pointer int 1
 *@b:pointer int 2
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
