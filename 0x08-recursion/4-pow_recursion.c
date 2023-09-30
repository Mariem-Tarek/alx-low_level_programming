#include "main.h"
/**
* _pow_recursion - a new function
*
* @x : int prametar
* @y : int prametar
*
* Return: nothing or _pow_recursion
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
	return (1);
else if (y < 0)
	return (-1);

y--;
return (x * _pow_recursion(x, y));
}
