#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new structure dog
 * @name: name dog.
 * @age: age dog.
 * @owner: owner dog.
 * Return: null or new__dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new__dog;
	int a, b, c;

	a = 0, b = 0;
	while (name[a] != '\0')
	{
		a++;
	}
	while (owner[b] != '\0')
	{
		b++;
	}
	new__dog = malloc(sizeof(dog_t));
	if (new__dog == NULL)
	{
		return (NULL);
	}
	(*new__dog).name = malloc(sizeof(char) * (a + 1));
	if (new__dog == NULL)
	{
		free(new__dog);
		return (NULL);
	}
	(*new__dog).owner = malloc(sizeof(char) * (b + 1));
	if (new__dog == NULL)
	{
		free(new__dog);
		free((*new__dog).name);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
	{
		(*new__dog).name[c] = name[c];
	}
	for (c = 0; c <= b; c++)
	{
		(*new__dog).name[c] = name[c];
	}
	(*new__dog).age = age;
	return (new__dog);
}
