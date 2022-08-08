#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, k = 0;
	int num;
	int n_displayed = 0;
	char *str = '\0';

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else
		{
			/* format[i] == '%*/
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				n_displayed++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				k = 0;
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					n_displayed++;
					k++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				n_displayed++;
			}
			else if (format[i + 1] == 'd')
			{
				i++;
				num = va_arg(args, int);
				while (num > 0)
				{
					_putchar('0' + num % 10);
					n_displayed++;
				}
			}
		}
		i++;
	}
	return (n_displayed);
	va_end(args);
}
