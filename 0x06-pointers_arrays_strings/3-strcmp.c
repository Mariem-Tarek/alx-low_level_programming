#include "main.h"

/**
* _strcmp - a new function
*
* @s1 : char prametar
* @s2 : char prametar
*
* Return: i
*/
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (*s1)
{
if (*s1 != *s2)
{
i = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
else
{
s1++;
s2++;
}
}
return (i);
}
