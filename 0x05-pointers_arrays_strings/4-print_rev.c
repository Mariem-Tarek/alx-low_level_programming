#include "main.h"

/**
* print_rev - a new function
*
* @s : char prametar
*
* Return: Nothing
*/


void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;

while (i--)
_putchar(s[i]);

_putchar('\n');
}
