#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
  * _print_str - print string
  * @args: variadic arg
  * Return: lenght of string
  */

int _print_str(va_list args)
{
	int i = 0;
	char *arg = va_arg(args, char *);

	if (arg != NULL)
	{
		while (arg[i])
		{
			_write(arg[i]);
			i++;
		}
		return (i);
	}
	_write('(');
	_write('n');
	_write('u');
	_write('l');
	_write('l');
	_write(')');
	return (0);
}
