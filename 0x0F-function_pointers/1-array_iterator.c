#include "function_pointers.h"
/**
* array_iterator - a new function
*
* @array : int prametar
* @size : function pointer
* @action : eunction pointer
*
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && action)
{
unsigned int i;
for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}
}
