#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
  * get_with - correct funct
  * @format: spec
  * Return correct funct
  */

int (*get_with(char format))(va_list)
{
	int i;
	print_it sp[] = {
		{'c', _print_char},
		{'s', _print_str},
		{'u', print_int},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_HEX},
		{'a', print_a},
		{'p', print_p},
		{'\0', NULL}
	};

	for (i = 0; sp[i]._type; i++)
	{
		if (format == sp[i]._type)
		{
			return (sp[i].f);
		}
	}
	return (NULL);
}
