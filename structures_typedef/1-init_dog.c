#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Entry
 * @d: pointeur
 * @name: name
 * @owner: proprio
 * @age: age
 * Return: si = null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
