#include "variadic_functions.h"
void print_all(const char *const format, ...)
{
        va_list form;
        char *stg;
         int i = 0;
        char *space;
        va_start(form, format);
       

        while (format[i] != '\0')
        {
                space = "";
                if (format[i + 1])
                {
                        space = ", ";
                }

                switch (format[i])
                {
                case 'c':
                        printf("%c%s", (char) va_arg(form, int), space);

                        break;
                case 'i':
                int print_int(va_list i)
                        printf("%i%s", va_arg(form, int), space);
                        break;
                case 'f':
                        printf("%f%s", (float)va_arg(form, int), space);
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
                i++;
        }
        printf("\n");
        va_end(form);
}