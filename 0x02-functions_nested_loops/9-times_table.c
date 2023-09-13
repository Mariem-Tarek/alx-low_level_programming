#include "main.h"

/**
 * time_table - function prints
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void)
{
int i;
int j;
int res;

for (i = 1; i <= 9; i++)
{
putchar(48);
for (j = 1; j <= 9; j++)
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
