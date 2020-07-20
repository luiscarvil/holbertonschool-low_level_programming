#include "variadic_functions.h"
/**
 * print_all - print numbes, followed bu a new line.
 * * @format: pointer num arguments.
 * Return: nothing void.
 */
void print_all(const char *const format, ...)
{
	va_list form;
	char *stg;
	int i;
	char *space;

	va_start(form, format);
	for  (i = 0; format[i] != '\0'; i++)
	{
		space = "";
		if (format[i + 1])
		{
			space = ", ";
		}

		switch (format[i])
		{
		case 'c':
			printf("%c%s", (char)va_arg(form, int), space);

			break;
		case 'i':
			    printf("%i%s", va_arg(form, int), space);
			break;
		case 'f':
			printf("%f%s", va_arg(form, double), space);
			break;
		case 's':
			stg = va_arg(form, char *);
			if (stg == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s%s", stg, space);
			break;
		}
	}
	printf("\n");
	va_end(form);
}
