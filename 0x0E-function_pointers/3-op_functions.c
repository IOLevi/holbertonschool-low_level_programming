#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two ints
 * @a: operand 1
 * @b: operand 2
 * Return: the integer result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two ints
 * @a: operand 1
 * @b: operand 2
 * Return: the integer result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two ints
 * @a: operand 1
 * @b: operand 2
 * Return: the integer result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two ints
 * @a: operand 1
 * @b: operand 2
 * Return: the integer result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - gets the integer remainder of  two ints
 * @a: operand 1
 * @b: operand 2
 * Return: the integer result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
