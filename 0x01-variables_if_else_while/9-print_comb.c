#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
a = 0;
while (a <= 8)
	{
putchar('0' + a);
putchar(',');
putchar(' ');
a++;
	}
	putchar('9');
	return (0);
}
