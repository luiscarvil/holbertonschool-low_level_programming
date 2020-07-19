#include "variadic_functions.h"
void print_numbers(const char *separator, const unsigned int n, ...)
{
        unsigned int i;
        va_list lista;
        char *space;
        if (separator == NULL)
        {
                space = "";
        }
        else
        {
                space = (char *)separator;
        }
        va_start(lista, n);
        printf("%d", va_arg(lista, int));
        for (i = 1; i < n; i++)
        {
                printf("%s%d", space, va_arg(lista, int));
        }
        printf("\n");
        va_end(lista);
}