#include "main.h"
/**
* _print_rev_recursion - a new function
*
* @s : char prametar
*
* Return: nothing or _print_rev_recursion
*/
void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
