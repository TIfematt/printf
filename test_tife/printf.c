#include "main.h"
#include <stdarg.h>

/**
 * _printf - A function that prints formatted output to
 * stdout
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int n_displayed = 0;
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (_putchar(format[i]) != '%')
			_putchar(format[i]);
		else
		{
			if (format[i+1] == 'c')
				_putchar(va_args(args, int));
		}
	
		i++;
	}

	va_end(args);
	return(n_displayed);
}
