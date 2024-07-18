<<<<<<< HEAD
=======
<<<<<<< HEAD
#ifndef FUNC_H
#define FUNC_H

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
=======
>>>>>>> master
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
<<<<<<< HEAD
=======
>>>>>>> 40d5813 (0. What's my name)
>>>>>>> master
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
