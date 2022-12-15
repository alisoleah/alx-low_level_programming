#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* times_table() - to print 9 times table
*
* Return: times table
*/
void times_table(void)
{
int row, col, temp;
for (row = 0; row <= 9; row++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (col = 1; col <= 0; col++)
{
temp = (row * col);
if ((temp / 10) > 0)
{
_putchar((temp / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((temp % 10) + '0');
if (col < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
