#include <stdio.h>
#include <stdlib.h>

/**
 *main - point
 *@argc: string
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		for (i = 0; i < argc; i++)
			res *= atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
