#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list string;
        unsigned int i;
        char *s, *p;

        s = (char *)separator;
        va_start(string, n);
        printf("%s", va_arg(string, char *));
        for (i = 0; i < n; i++)
        {
                p = va_arg(string, char *);
                if (p == NULL)
                {
                        p = "";
                }
                if (separator == NULL)
                {
                        printf("%s", va_arg(string, char *));
                }
                else
                {
                        printf("%s%s", s, p);
                }
        }
        printf("\n");
        va_end(string);
}