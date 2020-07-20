#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print numbes, followed bu a new line.
 * * @format: pointer num arguments.
 * Return: nothing void.
 */
void print_all(const char *const format, ...)
{
	char *space;
	unsigned int i = 0;
	va_list lista;

	if (format != NULL)
	{
		space = "";
		va_start(lista, format);
		while (*(format + i) != '\0')
		{
			switch (*(format + i))
			{
			case 'c':
				printf("%s", space);
				space = ", ";
				printf("%c", va_arg(lista, int));
				break;
			case 'i':
				printf("%s", space);
				space = ", ";
				printf("%d", va_arg(lista, int));
				break;
			case 'f':
				printf("%s", space);
				space = ", ";
				printf("%f", va_arg(lista, double));
				break;
			case 's':
				if (space == NULL)
					printf("(nil)");
				else
				{
					printf("%s", space);
					space = ", ";				}
				printf("%s", va_arg(lista, char *));
				break;
			}			i++;
		}	}	printf("\n");
	va_end(lista);
}
