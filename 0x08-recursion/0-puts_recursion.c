#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - print chess board
 *@s: string of characters
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_put_recursions(s + 1);
	}
}
