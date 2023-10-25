#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* flip_bits - a new function
*
* @n : int prametar
* @m: int prametar
*
* Return: count
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xorval = n ^ m;
unsigned int count = 0;

while (xorval)
{
if (xorval & 1ul)
count++;
xorval = xorval >> 1;
}
return (count);
}
