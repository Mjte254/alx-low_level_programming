<<<<<<< HEAD
=======
<<<<<<< HEAD
#include "lists.h"

/**
 * bmain - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
=======
>>>>>>> master
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
<<<<<<< HEAD
=======
>>>>>>> 332ac22 (5. The Hare and the Tortoise)
>>>>>>> master
}
