#include "main.h"
/**
* factorial - a new function
*
* @n : int prametar
*
* Return: nothing or factorial
*/
int factorial(int n)
{
if (n == 0)
	return (1);
else if (n < 0)
	return (-1);

return (n * factorial(n - 1));
}
