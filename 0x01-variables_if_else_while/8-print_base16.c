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
int b;
char a;
a = 'a';
b = 0;
while (b <= 9)
	{
putchar('0' + b);
b++;
	}
while (a <= 'f')
	{
putchar(a);
a++;
	}
	putchar('\n');
	return (0);
}
