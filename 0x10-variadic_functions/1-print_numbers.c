#include "variadic_functions.h"
<<<<<<< HEAD

/**
 * print_numbers - prints num
 * @separator: pointer param
 * @n: param
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
=======
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
>>>>>>> 822b350 (1. To be is to be the value of a variable)
			printf("%s", separator);
	}

	printf("\n");
<<<<<<< HEAD
	va_end(valist);
=======

	va_end(nums);
>>>>>>> 822b350 (1. To be is to be the value of a variable)
}
