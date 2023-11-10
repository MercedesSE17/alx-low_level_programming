#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @var: va_list containing the character.
 */
void print_char(va_list var)
{
    printf("%c", va_arg(var, int));
}

/**
 * print_int - Prints an integer.
 * @var: va_list containing the integer.
 */
void print_int(va_list var)
{
    printf("%d", va_arg(var, int));
}

/**
 * print_float - Prints a float.
 * @var: va_list containing the float.
 */
void print_float(va_list var)
{
    printf("%f", va_arg(var, double));
}

/**
 * print_str - Prints a string.
 * @var: va_list containing the string.
 */
void print_str(va_list var)
{
    char *s = va_arg(var, char *);
    if (s == NULL)
        s = "(nil)";
    printf("%s", s);
}

int main()
{
    typ_t format_map[] = {
        {"c", print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_str},
        {NULL, NULL}
    };

    print_all("cifs", 'H', 42, 3.14, "Hello, World!");

    return 0;
}

