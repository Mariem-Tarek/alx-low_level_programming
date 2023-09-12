#include "main.h"

/**
 * print_last_digit - function prints
 *
 * @x: parameter that taken to be checked
 *
 * Return: last
 */
int print_last_digit(int x)
{
	int last;
if (x > 0)
{
	last = x % 10;
}
else
{
	last = -1 * (x % 10);
}
	_putchar(last + '0');
	return (last);
}
