<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
=======
#include <stdio.h>
#include <stdlib.h>
>>>>>>> 4aa19f4 (2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad)
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
