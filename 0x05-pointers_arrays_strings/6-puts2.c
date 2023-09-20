#include "main.h"

/**
* puts2 - a new function
*
* @str : char prametar
*
* Return: Nothing
*/


void puts2(char *str)
{
int l;
for (l = 0; str[l] != '\0'; ++l)
{
if (l % 2 == 0)
{
_putchar(str[l]);
}
_putchar('\n');
}
}
