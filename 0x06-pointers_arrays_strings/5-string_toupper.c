#include "main.h"

/**
* string_toupper - a new function
*
* @n : char prametar
*
* Return: original
*/
char *string_toupper(char *n)
{
char *original = n;
while (*n != '\0')
{
if (*n >= 'a' && *n <= 'z')
{
*n = *n - 32;
}
n++;
}
return (original);
}
