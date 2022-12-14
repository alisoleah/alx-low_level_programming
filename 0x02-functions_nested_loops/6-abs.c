#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*_abs - to print absolute value for 
*@c: input
* Return: absolute value
*/
int _abs(int c)
{
return ((unsigned int)((c < 0) ? -c : c));
}
