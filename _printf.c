#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
  * _printf - printf function
  * @format: string format
  * Return: length of string
  */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, sum = 0;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]), sum++, i++;
			continue;
		}
		if (format[i] == '%')
		{
			i++;
			if (format[i] != '\0')
			{
				sum += _print(format[i], arg);
			}
			else
			{
				va_end(arg);
				return (-1);
			}

		}
		i++;
	}
	va_end(arg);
	return (sum);
}
