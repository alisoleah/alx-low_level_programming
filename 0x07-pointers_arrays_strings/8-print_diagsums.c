#include "main.h"
#include <stdio.h>

/**
 *  print_diagsums - print chess board
 *@a: pointer int
 *@size: int
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, z = 0;

	for (i = 0; i < size * size; i += (size + 1))
		j += a[i];
	for (i = size - 1; i < (size * size) - (size - 1); i += (size - 1))
		z += a[i];

	printf("%d, %d\n", j, z);
}
