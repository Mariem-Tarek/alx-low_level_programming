#include "main.h"

/**
 * print_sign - function prints
 *
 * @n: parameter that taken to be checked
 *
 * Return:1 or 0 or -1
 */
int print_sign(int n)
{
if (n >= 1)
{
	putchar('+');
	return (1);
}
else if (n == 0)
{
	putchar('0');
	return (0);
}
else
{
	putchar('-');
	return (-1);
}
}
