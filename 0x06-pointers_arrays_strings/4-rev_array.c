#include "main.h"

/**
 * reverse_array - reverse array 
 *@a: pointer char 1
 *@n: size of int
 *
 *Return: full int
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n / 2 ; i--)
	{
		temp = a[n -1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}

}
