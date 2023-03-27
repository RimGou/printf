#include <stdarg.h>
#include "main.h"
/**
 * _print - print to stdout
 * @c: character to check
 * @arg: fromwe can get value to print
 * Return: length of string
 */

int _print(char c, va_list arg)
{
	int sum = 0;

	switch (c)
	{
		case '%':
			_putchar('%'), sum++;
		break;
		case 'c':
			_putchar(va_arg(arg, int)), sum++;
		break;
		case 's':
			sum += _print_str(va_arg(arg, char *));
		break;
		default:
			_putchar('%'), _putchar(c), sum += 2;
		break;
	}
	return (sum);
}
