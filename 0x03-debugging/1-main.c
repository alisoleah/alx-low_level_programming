#include <stdio.h>
#include "main.h"

/**
* main - main function
*
* Return: 0 (SUCCESS)
*/
int main(void)
{
int i;
printf("Infinite loop incoming : (\n)");
i = 0;
while (i < 10)
{
putchar(i);
i++;
}
printf("Infinite loop avoided! \\o/\n");
return (0);
}
