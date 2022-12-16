#include <stdio>
#include "main.h"

/**
 * main - print fizzbuzz for  3&5
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz")
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);

		if (x != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
