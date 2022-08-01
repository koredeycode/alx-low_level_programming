#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: the pointer to the created dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret;

	ret = malloc(sizeof(dog_t));
	ret->name = name;
	ret->age = age;
	ret->owner = owner;
	return (ret);
}
