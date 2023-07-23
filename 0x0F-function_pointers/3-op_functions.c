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
 * return: the sum od a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - return the difference of two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * return: the difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - return the product of two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * return: the product of a and b.
 */

int op_mul(int a, int b)
{
        return (a * b);
}


/**
 * op_div - return the division of two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * return: the division of a and b.
 */

int op_div(int a, int b)
{
        return (a / b);
}



/**
 * op_mod - return theremainder of division of two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * return: the remainder of division of a and b.
 */ 

int op_mod(int a, int b)
{       
        return (a % b);
}
