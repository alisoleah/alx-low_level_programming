#include "main.h"

/**
 * string_toupper - reverse array
 *@str: pointer char 1
 *Return: full int
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
