#include "variadic_functions.h"
/**
 * print_all - print numbes, followed bu a new line.
 * * @format: pointer num arguments.
 * Return: nothing void.
 */
void print_all(const char *const format, ...)
{
	va_list form;
	int i = 0;
	char *space;

	if (format != NULL)
	{
		space = "";
		va_start(form, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s", space);
				space = ", ";
				printf("%c", va_arg(form, int));
				break;
			case 'i':
				printf("%s", space);
				space = ", ";
				printf("%d", va_arg(form, int));
				break;
			case 'f':
				printf("%s", space);
				space = ", ";
				printf("%f", va_arg(form, double));
				break;
			case 's':
				if (space == NULL)
					printf("(nil)");
				else
					printf("%s", space);
				space = ", ";
				printf("%s", va_arg(form, char *));
				break;
			}			i++;
		}
	}
	printf("\n");
	va_end(form);
}
