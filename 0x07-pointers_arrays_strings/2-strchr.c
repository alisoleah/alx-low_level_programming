#include "main.h"

/**
 * _strchr - locates a character in a string
 *@s: pointer to char
 *@c: char
 *Return: Pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; is[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
