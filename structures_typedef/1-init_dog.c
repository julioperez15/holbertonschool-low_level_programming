#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - unction that initialize a variable of type struct dog.
 * @*d : pointer to struct dog
 * @*name : name of user
 * @age : age of user 
 * @*owner : pointer to owner
 *
 * Return : 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
