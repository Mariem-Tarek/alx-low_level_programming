#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
* malloc_checked- a new function
*
* @b : unsigned int prametar
*
* Return: 98 or m
*/
void *malloc_checked(unsigned int b)
{
void *m;
m = malloc(b);

if (m == NULL)
exit(98);

return (m);
}
