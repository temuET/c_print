#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
    int count = 0, i;
    va_list data;
    va_start(data, format);
  
    for (i = 0; format[i] != '\0';)
    {
        /*count the number of charactor*/
      if (format[i] != '%')
      {
        count += _putchar(format[i]);
        i++;
        
      }
      else if (format[i] == '%' && format[i + 1] != ' ')
      {
        switch (format[i + 1])
          {
            case 'c':
              /*print the charactor from the va_arg*/
              count += _putchar(va_arg(data, int));
              break;
            case 's':
              count += print_string(va_arg(data, char *));
              break;
            case '%':
              /*print the charactor from the va_arg*/
              count += _putchar('%');
              break;
            default:
              break;
          }
        i += 2;
      }
    }

    return (count);
}