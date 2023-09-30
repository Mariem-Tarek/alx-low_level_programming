#include "main.h"
/**
* _prime - a new function
*
* @a : int prametar
* @b : int prametar
*
* Return: nothing or _prime
*/
int _prime(int a, int b)
{
if (a == b)
	return (1);
else if (a <= 1 || (a % b == 0 && b != a))
	return (0);

return (_prime(a, b + 1));
}

/**
* is_prime_number - a new function
*
* @n : int prametar
*
* Return: nothing or _prime_number
*/
int is_prime_number(int n)
{
return (_prime(n, 2));
}
