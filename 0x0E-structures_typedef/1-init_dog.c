#include <stdio.h>
#include "dog.h"

/**
 * init dog - initialize a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: member
 * @age: member
 * @owner: member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->agr = age;
	d->owner = owner;
}
