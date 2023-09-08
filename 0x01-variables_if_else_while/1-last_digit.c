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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter the number ");
	scanf("%d", &n);
	int lad = n % 10;
if (lad > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, lad);
	}
	else if (lad < 6 &&  lad != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, lad);
	}
	else
	{
	printf("Last digit of %d is 0 and is 0", n);
	}
	return (0);
}

