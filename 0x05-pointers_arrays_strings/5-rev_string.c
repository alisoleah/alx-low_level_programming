#include "main.h"

/**
 * rev_string -print string in reverse
 *@s: pointer
 *
 *Return: void
 */
void rev_string(char *s)
{
	int i, j, c;
	char *t, temp;

	t = s;

	while (s[c] != '\0')
		c++;
	for (j = 1; j < c; j++)
		t++;
	for (i = 0; i < (c / 2); i++)
	{
		temp = s[i];
		s[i] = *t;
		*t = temp;
		t--;
	}

}
