#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _islower - to print q for lower 0 for upeer case
*@c: input
* Return: Always 0 (Success)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
