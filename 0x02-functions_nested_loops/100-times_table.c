#include "main.h"

/**
 * print_times_table - function prints
 *
 * @n: parameters that taken to be checked
 *
 * Return: 0 always (Successd)
 */
void print_times_table(int n)
{
if (n > 0 && n < 15)
{
int i;
int j;
int res;
for (i = 0; i <= n; i++)
{
putchar(48);
for (j = 1 ; j <= n ; j++)
{
putchar(',');
putchar(' ');
res = i * j;
if (res > 9)
{
putchar(res / 10 + '0');
putchar(res % 10 + '0');
}
else
{
putchar(' ');
putchar(res + '0');
}
}
putchar('\n');
}
}
}
