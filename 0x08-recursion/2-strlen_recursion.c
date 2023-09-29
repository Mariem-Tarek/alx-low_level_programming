#include "main.h"
/**
* _strlen_recursion - a new function
*
* @s : char prameta r
*
* Return: nothing or _strlen_recursion
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
