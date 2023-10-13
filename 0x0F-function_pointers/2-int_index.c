#include "function_pointers.h"
/**
* int_index - a new function
*
* @array : int prametar
* @size : function pointer
* @cmp : eunction pointer
*
* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0)
{
return (-1);
}
else
{
int i;
int count;
count = 0;
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
break;
else
count++;
}
if (count == size)
return (-1);
else
return (i);
}
}
