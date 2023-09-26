#include "main.h"
/**
* _strpbrk - a new function
*
* @s : int prametar
* @accept : int prametar
*
* Return: s
*/
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
