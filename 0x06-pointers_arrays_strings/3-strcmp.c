#include "main.h"

/**
 * _strcmp - int concatinate
 *@s1: pointer char 1
 *@s2:pointer char 2
 *
 *Return: full int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
