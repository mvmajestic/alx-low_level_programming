#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - will free memory allocated for struct dog
 * @d: the struct dog to free
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
