#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees,
 * (memory allocated for a struct dog) dogs
 * @d: struct dog to free
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