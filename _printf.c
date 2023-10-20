#include "main.h"

/**
 * _printf - A function that prints output according
 * to a format
 *
 * @format: format strings
 *
 * Return: int (in this case the number of printed characters)
 */

int _printf(const char *format, ...)
{
	int indx = 0, char_cnt = 0;
	va_list arg_list;

	va_start(arg_list, format);

	if (!format)
	{
		va_end(arg_list);
		return (-1);
	}
	else
	{
		while (format[indx])
		{
			if (format[indx] == '%')
			{
				indx++;
				conditions(format[indx], arg_list);
			}
			else
				char_cnt += _putchar(format[indx]);
			indx++;
		}
	}
	va_end(arg_list);
	return (char_cnt);
}
