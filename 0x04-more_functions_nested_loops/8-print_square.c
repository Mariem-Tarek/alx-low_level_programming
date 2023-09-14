#include "main.h"

/**
 * print_square - function prints
 *
 * @n : pramiter to be checked
 *
 * Return: no return
 */
void print_square(int n)
{
int j;
int i;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
putchar('#');
}
putchar('\n');
}
}
putchar('\n');
}
