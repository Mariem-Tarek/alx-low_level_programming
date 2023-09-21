#include "main.h"

/**
* cap_string - a new function
*
* @n : int prametar
*
* Return: original
*/
char *cap_string(char *n)
{
char *original = n;
while (*n != '\0')
{
if (*n >= 'a' && *n <= 'z')
{
*n = *n - 32;
}
else if (*n == '\t')
{
*n = ' ';
}
n++;
}
return (original);
}
