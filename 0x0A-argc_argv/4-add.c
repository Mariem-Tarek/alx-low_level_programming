#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 * @argc : int
 * @argv : string
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
int sum;
int i;

if (argc != 1)
{
printf("%d\n", 0);
}
else
{
for (i = 0; i < argc; i++)
{

if (*argv[i] >= 48 && *argv[i] >= 57)
{
sum += atoi(argv[i]);
}
else
{
printf("Error");
}
}
}
return (0);
}

