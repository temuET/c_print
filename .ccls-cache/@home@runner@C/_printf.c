#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
    int count = 0, i;
    va_list data;
    va_start(data, format);
  
    for (i = 0; format[i] != '%'  && format[i] != '\0'; i++)
    {
        /*count the number of charactor*/
        count += _putchar(format[i]); 
    }

    return (count);
}