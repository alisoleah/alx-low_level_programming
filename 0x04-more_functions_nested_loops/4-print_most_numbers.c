#include "main.h"

/**
 * print_most_numbers - prints number from 0 to 9
 *
 * Description: Prints number except 2 n 4 to 9
 *
 *Return: numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
		_putchar(i + '0');
	}
	_putchar('\n');
}

