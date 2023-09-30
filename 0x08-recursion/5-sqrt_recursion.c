#include "main.h"
/**
* _sqrt - a new function
*
* @a : int prametar
* @b : int prametar
*
* Return: nothing or _sqrt
*/
int _sqrt(int a, int b)
{
if (b * b == a)
	return (b);
else if (b * b > a)
	return (-1);

return (_sqrt(a, b + 1));
}
/**
* _sqrt_recursion - a new function
*
* @n : int prametar
*
* Return: nothing or _sqrt_recursion
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 0));
}
