#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* main - Entry point
*
* Description: 'print using puts'
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *str = "putchar";
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
return(0);
}
