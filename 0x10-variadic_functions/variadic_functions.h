<<<<<<< HEAD
=======
<<<<<<< HEAD
#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);


=======
>>>>>>> master
#ifndef _VARIADIC_H_
#define _VARIADIC_H_

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
<<<<<<< HEAD
=======
>>>>>>> 13f35e9 (0. Beauty is variable, ugliness is constant)
>>>>>>> master
#endif
