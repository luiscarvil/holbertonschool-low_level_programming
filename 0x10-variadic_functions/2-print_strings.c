#include "variadic_functions.h"
/**
 * print_strings - print numbes, followed bu a new line.
 * @separator: space separator.
 * @n: pointer num arguments.
 * Return: nothing void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *p;
	unsigned int i;
	va_list string;

	if (separator == NULL)
		return;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(string, char *);
		if (p == NULL)
		{
			p = "(nil)";
		}
		else
		{
			printf("%s", p);
		}
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
