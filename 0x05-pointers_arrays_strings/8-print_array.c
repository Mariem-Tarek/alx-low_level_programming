#include <stdio.h>

/**
* print_array - a new function
*
* @a : int prametar
* @n : int prametar
*
* Return: Nothing
*/
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
if (i != (n - 1))
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
putchar('\n');
}
