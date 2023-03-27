#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
  * _print_char - prints char
  * @args: variadic arg
  * Return: length of char
  */

int _print_char(va_list args);
{
	_write(va_arg(args, int));
	return (1);
}
