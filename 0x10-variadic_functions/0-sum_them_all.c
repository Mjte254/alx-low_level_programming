#include "variadic_functions.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD

/**
 * sum_them_all - adds num
 * @n: param
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	sum += va_arg(valist, int);

	va_end(valist);
=======
>>>>>>> master
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
<<<<<<< HEAD
=======
>>>>>>> 13f35e9 (0. Beauty is variable, ugliness is constant)
>>>>>>> master

	return (sum);
}
