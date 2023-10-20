#include "main.h"

/**
 * conditions - A function that handle various format
 * specifiers and call corresponding functions
 *
 * @format: The format string containing format
 * specifiers.
 * @arg_list: The variable argument list.
 *
 * Return: None (void), but updates 'char_cnt' based
 * on the format specifier
 */

int conditions(const char format, va_list arg_list)
{
	int char_cnt = 0;
	char spec[] = {'%', 'c', 's', 'd', 'i', 'x', 'X', 'u', 'o', 'b'};

	if (format == spec[1])
		char_cnt += _putchar(va_arg(arg_list, int));
	else if (format == spec[2])
		char_cnt += print_str(va_arg(arg_list, char *));
	else if (format == spec[0])
		char_cnt += p_print();
	else if (format == spec[3] || format == spec[4])
		char_cnt += print_int(va_arg(arg_list, int));
	else if (format == spec[7])
		char_cnt += print_uint(va_arg(arg_list, Uint));
	else if (format == spec[5])
		char_cnt += print_hex(va_arg(arg_list, Uint), 0);
	else if (format == spec[6])
		char_cnt += print_hex(va_arg(arg_list, Uint), 1);
	else if (format == spec[8])
		char_cnt += print_octal(va_arg(arg_list, Uint));
	else if (format == spec[9])
		char_cnt += print_binary(va_arg(arg_list, Uint));
	else
	{
		_putchar('%');
		_putchar(format);
		char_cnt += 2;
	}
	return (char_cnt);
}
