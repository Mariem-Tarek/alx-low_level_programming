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
printf("Size of a char: %ld bytes(s)\n", sizeof(char));
printf("Size of a int: %ld bytes(s)\n", sizeof(int));
printf("Size of a long int: %ld bytes(s)\n", sizeof(long));
printf("Size of a long long: %ld bytes(s)\n", sizeof(long long));
printf("Size of a float: %ld bytes(s)\n", sizeof(float));
return (0);
}
