#include "dog.h"
#include <stdio.h>
#include <string.h> 
/*
 * init_dog - initalize a variable of type struct_dog
 * @d: pointer
 * @name: holding chharacter
 * @age: holding integer
 * @owner: holding cgaracter
 *
 * Return: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = strdup(name);
d->age = age;
d->owner = strdup(owner);
}
}
