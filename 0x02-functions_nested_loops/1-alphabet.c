#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_alphabet - to print lower case characters
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
}
