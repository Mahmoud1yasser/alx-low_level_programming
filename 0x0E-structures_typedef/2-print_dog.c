#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * print_dog - A dog will teach you
 * unconditional love.If you can have
 * that in your life, things won't be too bad.
 * @d: structure data.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	if (d->age == 0.0)
	{
		printf("Age: (nil)\n");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
