#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_sign - to print sign og number
*@n: input
* Return: 1 if postive number 0 if zero, -1 if negative number
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
