#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *@s: pointer to char
 *@b:pointer to char
 *@n: integer
 *Return: Pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);

}
