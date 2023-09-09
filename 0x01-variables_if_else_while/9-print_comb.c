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
int i;

for (i = 0; i < 10; i++)
{
if (i > 0)
	{
	putchar(',');
	putchar(' ');
	}
	putchar ('0' + i);
	}
	putchar('\n');
	return (0);
}
