#include "main.h"

/**
 * print_c - Formatted function to print a char
 * @c: character to print
 * Return: 1 on success
 */

int print_c(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}
