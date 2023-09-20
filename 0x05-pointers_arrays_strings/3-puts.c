#include "main.h"

/**
* _puts - a new function
*
* @str: char prametar
*
* Return: Nothing
*/
void _puts(char *str)
{
int i;
int lenght;
lenght = _strlen(str);
for (i = 0; i < lenght; i++)
{
_putchar(str[i] + 0);
}
_putchar('\n');
}
