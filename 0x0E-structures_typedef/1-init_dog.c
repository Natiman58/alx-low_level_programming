#include"dog.h"
#include<stdlib.h>
/**
 * init_dog- initializes a variable of type struct dog
 * @d: struct dog
 * @name: name forstruct dog
 * @age: age for struct dog
 * @owner: owner for struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
