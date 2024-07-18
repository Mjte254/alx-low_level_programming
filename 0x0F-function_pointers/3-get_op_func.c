#include "3-calc.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD

/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator given by the user
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i;

i = 0;

while (ops[i].op)
{
	if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);
	i++;
}

return (NULL);
=======
>>>>>>> master
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
<<<<<<< HEAD
=======
>>>>>>> 5b9c6cf (3. A goal is not always meant to be reached, it often serves simply as something to aim at)
>>>>>>> master
}
