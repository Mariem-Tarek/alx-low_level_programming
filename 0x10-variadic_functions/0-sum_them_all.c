#include<stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all- a new function
*
* @n : int prametar
*
* Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
else
{
int sum = 0;
int i = n;

va_list args;
va_start(args, n);
while (i--)
{
sum += va_arg(args, int);
}
va_end(args);

return (sum);
}
}
