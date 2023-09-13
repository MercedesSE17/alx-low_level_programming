#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the sum of two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * return : the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference between a and b.
 * @a: the first number
 * @b: the second number
 *
 * return : the difference between two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the multiplication between a and b.
 * @a: the first number
 * @b: the second number
 *
 * return : the multiplies  between two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the division between a and b.
 * @a: the first number
 * @b: the second number
 *
 * return : the devides  between two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder after div between a and b.
 * @a: the first number
 * @b: the second number
 *
 * return : the remainder after division  between two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}

