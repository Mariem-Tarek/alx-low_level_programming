#include "main.h"
/**
* _puts_recursion - a new function
*
* @s : char prametar
*
* Return: nothing or _puts_recursion
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
