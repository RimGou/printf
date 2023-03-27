#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct sp
{
	char _type;
	int (*f)(va_list args);
} print_it;

int (*get_with(char format))(va_list);
int _write(char c);
int _putchar(char c);
int _printf(const char *format, ...);
int _print_str(va_list args);
int _print_char(va_list args);
int _print(const char *forma, va_list arg);

#endif
