#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
int _putchar(char c);
/**
 * struct types - pointer to print all
 * @z: pointer to input for test
 * @f: pointer to function
 */
typedef struct types
{
	char z;
	void (*f)(va_list);
} types_t;

void print_int(va_list);

void print_char(va_list);

void print_float(va_list);

void print_string(va_list);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);
#endif
