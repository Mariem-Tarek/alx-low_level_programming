#include "main.h"

/**
* _strlen_recursion - a new function
*
* @s : int prametar
*
* Return: nothing or string
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
* compare_string - a new function
*
* @s : char prametar
* @left : int prametar
* @right : int prametar
*
* Return: int
*/

int compare_string(char *s, int left, int right)
{
if (*(s + left) == *(s + right))
{
if (left == right || left == right + 1)
return (1);
return (0 + compare_string(s, left + 1, right - 1));
}
return (0);
}

/**
* is_palindrome - a new function
*
* @s : int prametar
*
* Return: 1 or 0
*/

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
else
return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
