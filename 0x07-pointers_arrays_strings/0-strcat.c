#include "main.h"

/**
 * _strcat - string concatinate
 *@dest: pointer int 1
 *@src:pointer int 2
 *
 *Return: full string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}
