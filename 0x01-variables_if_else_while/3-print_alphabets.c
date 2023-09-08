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
char a;
a = 'a';
while (a <= 'z')
	{
putchar(a);
a++;
	}

a = a - 58;

while (a <= 'Z')
	{
putchar(a);
a++;
	}
	putchar('\n');
	return (0);
}
