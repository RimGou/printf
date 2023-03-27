#ifndef MAIN_H
#define MAIN_H
#include <stdrag.h>
#include <stdlib.h>
#include <unistd.h>

int (*get_with(char format))(va_list);
int _write(char c);
int _putchar(char c);
int _printf(const char *format, ...);
int _print_str(va_list args);
int _print_char(va_list args);
int _print(const char *forma, va_list arg);

#endif
