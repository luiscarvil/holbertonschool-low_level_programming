#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog.
 *@d: pointer struct dog.
 *@name: name dog str.
 *@age: age dog str.
 *@owner: owner dog str.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if ( d != '\0')
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
