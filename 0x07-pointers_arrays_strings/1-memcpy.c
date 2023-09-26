#include "main.h"

/**
* _memcpy - a new function
*
* @dest : int prametar
* @src : int prametar
* @n : int prametar
*
* Return:dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
