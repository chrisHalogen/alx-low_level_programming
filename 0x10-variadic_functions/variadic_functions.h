#ifndef VARIADIC_FUNCTIONS_HEADER_FILE
#define VARIADIC_FUNCTIONS_HEADER_FILE

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void _printchar(va_list list);
void _printstr(va_list list);
void _printfloat(va_list list);
void _printint(va_list list);

void print_all(const char * const format, ...);

#endif
