#include "main.h"

int _printf(const char *format, ...)
{
	int indx = 0, char_cnt = 0;
	va_list arg_list;
	char spec[] = {'%', 'c', 's', 'd', 'i', 'x', 'X', 'u', 'o'};

	va_start(arg_list, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
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
				{
					char_cnt += print_char(va_arg(arg_list, int));
				}
				else if (format[indx] == spec[2])
				{
					char_cnt += print_str(va_arg(arg_list, char *));
				}
				else if (format[indx] == spec[0])
				{
					char_cnt += p_print();
				}
				else if (format[indx] == spec[3])
				{
					char_cnt += print_int(va_arg(arg_list, int));
				}
			}
			else
			{
				char_cnt += _putchar(format[indx]);
			}
			indx++;
		}
	}
	va_end(arg_list);
	return (char_cnt);
}
