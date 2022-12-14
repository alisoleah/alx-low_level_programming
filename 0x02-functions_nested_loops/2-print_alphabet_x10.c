#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_alphabet_x10 - to print x10 alphabets
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i, turns = 0;
while (turns < 10)
{
for (i = 'a'; i <= 'z' ; i++)
{
_putchar(i);
}
turns++;
_putchar('\n');
}
}
