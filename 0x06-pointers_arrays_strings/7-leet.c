#include "main.h"

/**
* leet - a new function
*
* @n : int prametar
*
* Return: N
*/
char *leet(char *n)
{
char *cp = n;
char key[] = {'A', 'E', 'O', 'T', 'L'};
int value[] = {4, 3, 0, 7, 1};
unsigned int i;
while (*n)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (*n == key[i] || *n == key[i] + 32)
{
*n = 48 + value[i];
}
}
n++;
}
return (cp);
}
