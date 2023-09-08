#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char:%d\n", sizeof(char), "bytes(s)");
printf("Size of a int:%d\n", sizeof(int), "bytes(s)");
printf("Size of a long int:%d\n", sizeof(long), "byte(s)");
printf("Size of a long long:%d\n", sizeof(long long), "byte(s)");
printf("Size of a float:%d\n", sizeof(float), "byte(s)");
return (0);
}
