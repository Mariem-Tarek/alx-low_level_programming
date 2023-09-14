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
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
int j;
for (j = 0; j < i; j++)
putchar (' ');

_putchar(92);
_putchar('\n');
}
}
}
