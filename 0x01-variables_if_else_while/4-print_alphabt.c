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
if (a != 'q' && a != 'e')
putchar (a);

a++;
	}
	putchar('\n');
	return (0);
}
