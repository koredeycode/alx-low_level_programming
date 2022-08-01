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
	int i, namelen, ownerlen;

	ret = malloc(sizeof(dog_t));
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	for(namelen = 0; name[namelen]; namelen++)
		;
	for(ownerlen = 0; owner[ownerlen]; ownerlen++)
		;
	ret->name = malloc((namelen + 1) * sizeof(char));
	ret->owner = malloc((ownerlen + 1) * sizeof(char));
	if (!(ret->name) || !(ret->owner))
	{
		free(ret->name);
		free(ret->owner);
		free(ret);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
	{
		ret->name[i] = name[i];
	}
	ret->name[i] = '\0';
	ret->age = age;
	for (i = 0; i < ownerlen; i++)
	{
		ret->owner[i] = owner[i];
	}
	ret->owner[i] = '\0';

	return (ret);
}
