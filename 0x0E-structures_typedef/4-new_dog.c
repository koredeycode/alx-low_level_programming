#include "dog.h"
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret;
	ret = malloc(sizeof(dog_t));
	ret->name = name;
	ret->age = age;
	ret->owner = owner;
	return (ret);
}
