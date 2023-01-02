#include "main.h"

/**
 * _strstr - locates substringstring
 *@haystack: pointer Char
 *@needle: char pointer
 *Return: return pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, z;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] != haystack[z] || haystack[z] == '\0')
		{
			break;
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
