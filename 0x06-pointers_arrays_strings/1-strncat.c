#include "main.h"

/**
* _strncat - a new function
*
* @dest :string prametar
* @src :string prametar
* @n : int prametar
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n; j++)
{
if (src[j] != '\0')
{
dest[i] = src[j];
i++;
}
else
{
break;
}
}
dest[i] = '\0';
return (dest);
}
