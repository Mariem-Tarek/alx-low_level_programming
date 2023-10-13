#include "function_pointers.h"
/**
* print_name - a new function
*
* @name : int prametar
* @f : function pointer
*
* Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
