#include "main.h"

/**
* _strcpy - a new function
*
* @src: char prametar
* @dest : char prametar
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
