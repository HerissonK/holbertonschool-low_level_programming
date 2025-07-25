#ifndef _HEADER_
#define _HEADER_

/**
 * struct op - the list of all opperations
 *
 * @op: the operation
 * @f: the function to execute
 */

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

#endif
