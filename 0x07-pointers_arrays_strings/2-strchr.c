#include "main.h"
/**
* _strchr - a new function
*
* @s : int prametar
* @c : int prametar
*
* Return: 0 or s
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (0);
}
