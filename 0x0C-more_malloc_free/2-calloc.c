#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
* _memset- a new function
*
* @s : int prametar
* @b : int prametar
* @n : int prametar
*
* Return: null or s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
* _calloc - a new function
*
* @nmemb : int prametar
* @size : int prametar
*
* Return: null or s
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);

return (ptr);
}
