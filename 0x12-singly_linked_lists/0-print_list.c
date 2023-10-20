#include <stdio.h>
#include "lists.h"

/**
 * _strlen - c function
 *
 * @s: string
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	return (0);

	while (*s++)
	i++;
	return (i);
}

/**
 * print_list - c function
 *
 * @h: string - (malloc'ed string)
 *
 * Return: i
 */

size_t print_list(const list_t *h)
{
	size_t i = 0
		;
	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[%ld] (nil)\n", _strlen(h->str));
		else
		printf("[%ld] %s\n", _strlen(h->str), h->str);

		h = h->next;
		i++;
	}
	return (i);
}
