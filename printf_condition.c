#include "main.h"

/**
 * conditions - A function that handle various format
 * specifiers and call corresponding functions
 *
 * @format: The format string containing format
 * specifiers.
 * @arg_list: The variable argument list.
 * @indx: The current index in the format string.
 * @char_cnt: The current character count.
 *
 * Return: None (void), but updates 'char_cnt' based
 * on the format specifier
 */

void conditions(const char *format, va_list arg_list, int indx, int char_cnt)
{
	char spec[] = {'%', 'c', 's', 'd', 'i', 'x', 'X', 'u', 'o', 'b'};

	if (format[indx] == spec[1])
		char_cnt += _putchar(va_arg(arg_list, int));
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
