#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum
 * @a: first num
 * @b: second num
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference
 * @a: first num
 * @b: second num
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product
 * @a: first num
 * @b: second num
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns divison
 * @a: first num
 * @b: second num
 * Return: quotient of div of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns reminder of division of two numbers
 * @a: first num
 * @b: second num
 * Return: reminder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

