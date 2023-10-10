#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that createsa new dog
 * @name: holding character
 * @age: holding float
 * @owner: holding charcter
 *
 * Return: pointer to the newly created dog structer
 */

dog_t *new_dog(char *name, float age, char *owner)/*function*/
{
int name_length;
int owner_length;
int i;
dog_t *new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
{
return (NULL);
}
name_length = 0;
while (name[name_length] != '\0')
{
name_length++;
}
owner_length = 0;
while (owner[owner_length] != '\0')
{
owner_length++;
}
new_dog_ptr->name = malloc(name_length + 1);
new_dog_ptr->owner = malloc(owner_length + 1);
if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr->owner);
free(new_dog_ptr);
return (NULL);
}
for (i = 0; i <= name_length; i++)
{
new_dog_ptr->name[i] = name[i];
}
for (i = 0; i <= owner_length; i++)
{
new_dog_ptr->owner[i] = owner[i];
}
new_dog_ptr->age = age;
return (new_dog_ptr);
}
