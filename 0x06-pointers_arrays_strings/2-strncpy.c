#include "main.h"

/**
* _strncpy - a new function
*
* @dest : int prametar
* @src : int prametar
* @n : int prametar
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
