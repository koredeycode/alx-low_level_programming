#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;
/**
 * struct dog - contains infos about a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
