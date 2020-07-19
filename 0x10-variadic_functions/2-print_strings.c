#include "variadic_functions.h"
/**
 * print_strings - print numbes, followed bu a new line.
 * @separator: space separator.
 * @n: pointer num arguments.
 * Return: nothing void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *p;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(string, char *);
		if (p == NULL)
		{
			p = "(nill)";
		}
		else
		{
			printf("%s", p);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
