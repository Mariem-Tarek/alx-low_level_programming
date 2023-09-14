#include "main.h"

/**
 * print_diagonal - function prints
 *
 * @n : pramiter to be checked
 *
 * Return: no return
 */
void print_diagonal(int n)
{
int i;
int j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
putchar (' ');

_putchar(92);/*is equal to '/' char*/
_putchar('\n');
}
}
}
