#include "main.h"

/**
 * time_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void) /* time_table - prints the 9 times table */
{
int i;
int j;
int res;

for (i = 0; i <= 9; i++)
{
putchar(48);
for (j = 1; j <= 9; j++)
{
putchar(',');
putchar(' ');
res = i * j;
/*
 * put space if produst is a single number
 * place the first digit if its two numbers
*/
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
