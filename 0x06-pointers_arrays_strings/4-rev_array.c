#include "main.h"

/**
* reverse_array - a new function
*
* @n : int prametar
* @a : int prametar
*
* Return: Nothing
*/
void reverse_array(int *a, int n)
{
int i;
if (n % 2 == 0)
{
for (i = 0; i < n / 2 ; i++)
{
int temp;
temp = a[i];
a[i] = a[(n - 1) - i];
a[(n - 1) - i] = temp;
}
}
else
{
for (i = 0; i < (n - 1) / 2 ; i++)
{
int temp;
temp = a[i];
a[i] = a[(n - 1) - i];
a[(n - 1) - i] = temp;
}
}
}
