#include "main.h"

/**
 * _isdigit - check character is a digit
 *@c: the number to be checked
 *
 *Return: 1 (Success) else 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
return (0);
}
