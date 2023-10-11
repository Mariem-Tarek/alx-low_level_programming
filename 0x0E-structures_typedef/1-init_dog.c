#include <stdio.h>
#include "dog.h"
/**
* init_dog - a new function
*
* @d : int prametar
* @name : int prametar
* @age : int prametar
* @owner : int prametar
*
* Return: Nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;

return;
}
