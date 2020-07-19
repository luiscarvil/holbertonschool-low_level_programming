#include "variadic_functions.h"
/**
 * sum_them_all - add arguments in function.
 * @n: num arguments unsigned int.
 * Return: 0 or total.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total;
	va_list valores;

	if (n == 0)
	{
		return (0);
	}
	va_start(valores, n);
	total = 0;
	i = 0;
	while (i < n)
	{
		total = total + va_arg(valores, int);
		i++;
	}
	va_end(valores);
	return (total);
}
