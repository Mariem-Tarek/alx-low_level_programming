#include "main.h"

/**
 *  _isalpha - function prints
 *
 * @c: parameter that taken to be checked
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
	return (1);
}
else
{
	return (0);
}
}
