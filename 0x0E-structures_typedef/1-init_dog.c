#include "dog.h"

/**
 * init_dog - initialize a structure
 * @d: First operand
 * @name: Second operand
 * @age: age
 * @owner: ownerr
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

