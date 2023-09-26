#include "main.h"
/**
* _strspn - a new function
*
* @s : int prametar
* @accept : int prametar
*
* Return: n
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int j;
while (*s)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
n++;
break;
}
else if (accept[j + 1] == '\0')
{
return (n);
}
}
s++;
}
return (n);
}
