#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
    int i = 0;
    char *string, *separator = "";
    va_list list;

    va_start(list, format);
    if (format)
    {
        while (format[i])
        {
            if (format[i] == 'c')
            {
                printf("%s%c", separator, va_arg(list, int));
                separator = ", ";
            }
            else if (format[i] == 'i')
            {
                printf("%s%d", separator, va_arg(list, int));
                separator = ", ";
            }
            else if (format[i] == 'f')
            {
                printf("%s%f", separator, va_arg(list, double));
                separator = ", ";
            }
            else if (format[i] == 's')
            {
                string = va_arg(list, char *);
                if (!string)
                    string = "(nil)";
                printf("%s%s", separator, string);
                separator = ", ";
            }
            i++;
        }
    }
    printf("\n");

    va_end(list);
}
