#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_to_98 - to print numbers from n to 98
*@c: input
* Return: Always 0 (Success)
*/
void print_to_98(int c)
{
if (c < 98)
{
while (c <= 98)
{
printf("%d", c);
if (c != 98)
printf(", ");
c++;
}
}
else if (c >= 98)
{
while (c >= 98)
{
printf("%d", c);
if (c != 98)
printf(", ");
c--;
}
}
else
printf("98")'
printf("\n");
}
