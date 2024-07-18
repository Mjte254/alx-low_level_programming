#ifndef CALC_H
#define CALC_H
<<<<<<< HEAD
=======
<<<<<<< HEAD

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */

=======
>>>>>>> master
/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 */
<<<<<<< HEAD
=======
>>>>>>> 5b9c6cf (3. A goal is not always meant to be reached, it often serves simply as something to aim at)
>>>>>>> master
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

<<<<<<< HEAD
#endif
=======
<<<<<<< HEAD

#endif /* CALC_H */
=======
#endif
>>>>>>> 5b9c6cf (3. A goal is not always meant to be reached, it often serves simply as something to aim at)
>>>>>>> master
