#include "main.h"

/**
 * more_numbers - prints number x 10 from 0 to 14
 *
 *Return: numbers 10x the number
 */
void more_numbers(void)
{
	int i, y;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10 + '0');
			_putchar((j % 10) + '0');
		}
	}
	_putchar('\n');
}

