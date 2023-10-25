#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* set_bit - a new function
*
* @n : int prametar
* @index : int prametar
*
* Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);

return (!!(*n |= 1L << index));
}
