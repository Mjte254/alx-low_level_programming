#include <stdlib.h>
#include "dog.h"

/**
<<<<<<< HEAD
 * free_dog - free memory of dog
 * @d: poiner to dog
 */

=======
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 */
>>>>>>> ed8fe18 (5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg)
void free_dog(dog_t *d)
{
	if (d)
	{
<<<<<<< HEAD
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
=======
		free(d->name);
		free(d->owner);
>>>>>>> ed8fe18 (5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg)
		free(d);
	}
}
