#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * _print - print to stdout
 * @format: character to check
 * @args: variadic arg
 * Return: length of string
 */

int _print(const char *format, va_list args)
{
	int (*sp_func)(va_list);
	int count = 0, i;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format[i] != '\0' ; i++)
	{
		if (format[i] =='%')
		{
			if (format[i + 1] != '%')
			{
				sp_func = get_with(format[i + 1]);
				if (sp_func = NULL)
				{
					_write(format[1]);
					count++;
				}
				else
				{
					count = count + sp_func(args);
					i++;
				}
			}
			else
			{
				_write(format[1]);
				count++;
				i++;
			}
		}
		else
		{
			_write(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
