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
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
