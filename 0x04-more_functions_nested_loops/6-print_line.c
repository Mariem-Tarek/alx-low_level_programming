#include "main.h"

/**
 * print_line - function prints
 *
 * @n : pramiter to be checked
 *
 * Return: no return
 */
void print_line(int n)
{
if (n <= 0)
{
putchar ('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
putchar ('_');
}
putchar ('\n');
}
}
