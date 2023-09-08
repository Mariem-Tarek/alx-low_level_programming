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
	int n;
	int lad;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	lad = n % 10;

if (lad > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lad);
	}
	else if (lad < 6 &&  lad != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lad);
	}
	else
	{
	printf("Last digit of %d is 0 and is 0\n", n);
	}
	return (0);
}

