#include<stdarg.h>
#include "variadic_functions.h"
/**
*print_numbers - a new function
*
* @separator : char prametar
* @n : char prametar
*
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
int i = n;
va_list args;
if (!n)
{
printf("\n");
return;
}
va_start(args, n);
while (i--)
printf("%d%s", va_arg(args, int),
i ? (separator ? separator : "") : "\n");

va_end(args);

return;
}
