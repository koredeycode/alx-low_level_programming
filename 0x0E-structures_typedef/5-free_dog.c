#include "dog.h"
/**
 * free_dog - free the struct off heap memory
 * @d: the inputted struct
 */
void free_dog(dog_t *d);
{
	if (d)
	{
		if (!(d->name) || !(d->age) || !(d->owner))
		{
			free(d->name);
			free(d->age);
			free(d->owner);
			free(d);
		}
	}
}
