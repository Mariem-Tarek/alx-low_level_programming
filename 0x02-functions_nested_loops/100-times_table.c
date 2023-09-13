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
if (n >= 0 && n <= 15)
{
int i;
int j;
int res;
int res1;
int res2;
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
putchar(' ');
res1 = res / 10;
putchar(res1 + '0');
putchar(res % 10 + '0');
}
else if (res > 99)
{
res2 = res / 100;
putchar(res2 + '0');
putchar((res  - (res2 * 100)) / 10 + '0');
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
