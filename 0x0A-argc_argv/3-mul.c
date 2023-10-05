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
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
else
{
int sum;
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}

return (0);
}

