#include "main.h"

/**
 * more_numbers - function prints
 *
 * Return: no return
 */
void more_numbers(void)
{
int num;
int j;
for (j = 0; j < 10; j++)
{
int i;
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar('1');
num = i % 10;
}
_putchar (num + '0');
}
_putchar('\n');
}
}
