#include "main.h"

/**
 * _strspn - get length of prefix substring
 *@s: pointer Char
 *@accept: char pointer
 *Return: return number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, z = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				z++;
				break;
			}
		}
		if (accept(j) == '\0')
			return (z);
	}
	return (z);
}
