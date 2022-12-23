#include "main.h"

/**
 * _strncpy - int concatinate
 *@dest: pointer char 1
 *@src:pointer char 2
 *@n: size of int
 *
 *Return: full int
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i, j;

	i = 0;
	j = 0;

	while (src[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[j];

	for (i = j; i < n ; i++)
		dest[i] = '\0';
	return (dest);

}
