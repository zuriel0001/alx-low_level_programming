#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  a function that prints anything
 * @format: list of types of arguments passed to the function
 *

void print_all(const char* format, ...)
{
    va_list args;
    va_start(args, format);

    for (; *format != '\0'; format++)
    {
        switch (*format)
        {
            case 'i':
            {
                int i = va_arg(args, int);
                printf("%d", i);
                break;
            }
            case 'd':
            {
                double d = va_arg(args, double);
                printf("%f", d);
                break;
            }
            case 's':
            {
                char* s = va_arg(args, char*);
                printf("%s", s);
                break;
            }
            case 'c':
            {
                char c = (char)va_arg(args, int);
                printf("%c", c);
                break;
            }
        }
    }

    va_end(args);

    printf("\n");
}

