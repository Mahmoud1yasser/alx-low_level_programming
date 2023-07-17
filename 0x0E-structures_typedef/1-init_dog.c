#include "dog.h"
/**
 * init_dog - A dog is the only thing
 * on earth that loves you more than
 * you love yourself.
 * @d: data structure.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
