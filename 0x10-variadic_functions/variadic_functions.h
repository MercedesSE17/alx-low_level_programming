#ifndef VARFUNC
#define VARFUNC

#include <stdarg.h>

/**
 * sum_them_all - Sums up a variable number of integers.
 * @n: The number of integers to sum.
 * @...: The integers to sum.
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - Prints a variable number of integers.
 * @separator: The string to print between numbers.
 * @n: The number of integers to print.
 * @...: The integers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - Prints a variable number of strings.
 * @separator: The string to print between strings.
 * @n: The number of strings to print.
 * @...: The strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct typ - Struct to map format specifiers to functions.
 *
 * @c: Format specifier.
 * @tp: Function associated with the format specifier.
 */
typedef struct typ
{
	char *c;
	void (*tp)(va_list var);
} typ_t;

/**
 * print_all - Prints a variable number of arguments based on format specifiers.
 * @format: The format string specifying the types of arguments.
 * @...: The arguments to print.
 */
void print_all(const char * const format, ...);

#endif

