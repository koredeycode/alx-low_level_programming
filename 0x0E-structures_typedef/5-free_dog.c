#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the struct off heap memory
 * @d: the inputted struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
