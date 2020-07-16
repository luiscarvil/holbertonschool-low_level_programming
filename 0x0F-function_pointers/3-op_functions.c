#include "3-calc.h"
/**
 *op_add - add 2 numb.
 *@a: first integer add.
 *@b: second integer to add.
 *Return: add a, b;
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - resta 2 numb.
 * @a: firs int to rest;
 * @b: second int to rest;
 * Return: diference a, b;
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - mult 2 numbers;
 *@a: first integer to mul.
 *@b: second integer to mul.
 *Return: mult a, b;
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divide 2 numb.
 *@a: first integer to div.
 *@b: second integer to div.
 *Return: div a, b;
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}
/**
 *op_mod - modulo 2 numb.
 *@a: first integer to mod.
 *@b: second integer to mod.
 *Return: mod a, b;
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}
