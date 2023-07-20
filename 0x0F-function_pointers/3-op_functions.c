#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add operator
 * @a: first num
 * @b: second num
 * Return: the sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction
 * @a: first num
 * @b: second num
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: first num
 * @b: second num
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: first num
 * @b: second num
 * Return: Quotion
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - moduler op
 * @a: first num
 * @b: second num
 * Return: rest
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
