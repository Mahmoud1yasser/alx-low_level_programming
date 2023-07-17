#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: structure of new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *newdog;
		newdog = malloc(sizeof(dog_t));
		if (newdog == NULL)
		{
			return (NULL);
		}
		newdog->name = malloc(strlen(name) + 1);
		if (newdog->name == NULL)
		{
			free(newdog);
			return (NULL);
		}
		_strcpy(newdog->name, name);
		if (age != 0.0)
		{
		newdog->age = age;
		}
		else
		{
			return (NULL);
		}

		if (owner == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}
		newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (newdog->owner == NULL)
			return (NULL);
		_strcpy(newdog->owner, owner);
		return (newdog);
}
/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}
/**
 * _strcpy - function to copy string from source to destination
 *@dest: pointer to destinatioin of string to be copied
 *@src: pointer to source of string to be copied
 * Return: return the value at dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

