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
	char spec[] = {'%', 'c', 's', 'd', 'i', 'x', 'X', 'u', 'o', 'b', 'r'};
	va_start(arg_list, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(arg_list);
		return (-1);
	}
	else
	{
		while (format[indx])
		{
			if (format[indx] == spec[0])
			{
				indx++;
				if (format[indx] == spec[1])
					char_cnt += print_char(va_arg(arg_list, int));
				else if (format[indx] == spec[2])
					char_cnt += print_str(va_arg(arg_list, char *));
				else if (format[indx] == spec[0])
					char_cnt += p_print();
				else if (format[indx] == spec[3] || format[indx] == spec[4])
					char_cnt += print_int(va_arg(arg_list, int));
				else if (format[indx] == spec[7])
					char_cnt += print_unsigned(va_arg(arg_list, unsigned int));
				else if (format[indx] == spec[5])
					char_cnt += print_hex(va_arg(arg_list, unsigned int), 0);
				else if (format[indx] == spec[6])
					char_cnt += print_hex(va_arg(arg_list, unsigned int), 1);
				else if (format[indx] == spec[8])
					char_cnt += print_octal(va_arg(arg_list, unsigned int));
				else if (format[indx] == spec[9])
					char_cnt += print_binary(va_arg(arg_list, unsigned int));
			}
			else
				char_cnt += _putchar(format[indx]);
			indx++;
		}
	}
	va_end(arg_list);
	return char_cnt;
}
