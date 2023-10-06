#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 * @argc : int
 * @argv : string
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
int sum;
int i;
int count;
count = 0;

if (argc == 1)
{
printf("%d\n", 0);
}
else
{
for (i = 1; i < argc; i++)
{
if (*argv[i] >= '0' || *argv[i] <= '9')
{
sum += atoi(argv[i]);
}
else
{
printf("Error");
count++;
break;
}
}
if (count == 0)
{
printf("%d\n", sum);
}
}
return (0);
}

