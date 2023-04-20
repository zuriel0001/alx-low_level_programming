#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - a function that prints anything
 * @format:  a list of types of arguments passed to the function
 * @...: variabkes passed to the function
 */

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    if (format != NULL && *format != '\0')
    {
        char *s;
        while (*format != '\0')
        {
            if (*format == 'c')
            {
                printf("%c", va_arg(args, int));
            }
            else if (*format == 'i')
            {
                printf("%d", va_arg(args, int));
            }
            else if (*format == 'f')
            {
                printf("%f", va_arg(args, double));
            }
            else if (*format == 's')
            {
                s = va_arg(args, char *);
                printf("%s", s == NULL ? "(nil)" : s);
            }
            format++;
            if (*format != '\0' && (*format == 'c' || *format == 'i' || *format == 'f' || *format == 's'))
            {
                printf(", ");
            }
        }
    }

    printf("\n");
    va_end(args);
}

