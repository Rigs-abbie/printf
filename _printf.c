#include "main.h"

/**
 * _printf - Print to stoutformatted text
 * @format: format specifier
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			our_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			our_putchar(va_arg(args, int));
			i++;
		}
	 
		count += 1;
	}

	va_end(args);
	return (count);
}
