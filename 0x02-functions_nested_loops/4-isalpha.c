#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _isalpha - to print q for lower or upper
*@c: input
* Return: Always 1 (Success),  0 otherwise
*/
int _isalpha(int c)
{
if (((c >= 'a' && c <= 'z')) || ((c >= 'A' && c <= 'Z')))
return (1);
else
return (0);
}
