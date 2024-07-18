#include "variadic_functions.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD

/**
 * print_all - prints all
 * @format: param
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, k = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), k = 1;
				break;
			case 's':
				str = va_arg(valist, char *), k = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(valist);
=======
>>>>>>> master
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
<<<<<<< HEAD
=======
>>>>>>> ec79be0 (3. To be is a to be the value of a variable)
>>>>>>> master
}
