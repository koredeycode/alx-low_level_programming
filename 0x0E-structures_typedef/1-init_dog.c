#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct dog`
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: the function returns nothing
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
