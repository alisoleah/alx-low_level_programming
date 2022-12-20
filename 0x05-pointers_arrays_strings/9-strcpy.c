#include "main.h"
#include <stdio.h>

/**
 *_strcpy - string copy
 *@dest: pointer destination value
 *@src: pointer source value
 *Return: character pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	des[i++] = '\0';
	return (dest);
}
