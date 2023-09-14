#include <stdio.h>

/**
 * main - check the code
 *
 * Description: A C programme
 *
 * Return: 0 Always
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("%s", "FizzBuzz");
putchar(' ');
}
else if (i % 3 == 0 && i % 5 != 0)
{
printf("%s", "Fizz");
putchar(' ');
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("%s", "Buzz");
putchar(' ');
}
else
{
printf("%d", i);
if (i != 100)
putchar(' ');
else
printf("\n");
}
}
return (0);
}

