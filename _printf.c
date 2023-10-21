#include "main.h"

/**
 * _printf - A function that prints output according
 * to a format
 *
 * @format: format strings
 *
 * Return: int (in this case the number of printed characters)
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	int char_cnt = 0;
	char di_size[20], spec[] = {'%', 'c', 's', 'd', 'i', 'x', 'X', 'u', 'o', 'b'};

	va_list sr_list;

	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}
	va_start(sr_list, format);
	while (*format)
	{
		if (*format == spec[0])
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			if (*format == spec[1])
			{
				char f_char = va_arg(sr_list, int);

				write(1, &(f_char), 1);
				char_cnt++;
			}
			else if (*format == spec[2])
			{
				char *f_str = va_arg(sr_list, char *);

				if (f_str == NULL)
				{
					write(1, "(null)", SR_NULL);
					char_cnt += 6;
				}
				else
				{
					char_cnt += print_str(f_str);
				}
			}
			else if (*format == spec[0])
			{
				write(1, format, 1);
			}
			else if (*format == spec[3] || *format == spec[4])
			{
				int digits = va_arg(sr_list, int);

				snprintf(di_size, sizeof(di_size), "%d", digits);
				write(1, di_size, strlen(di_size));
				char_cnt += strlen(di_size);
			}
			else
			{
				char un_spec[UNKNOWN];
				int cus_spec = snprintf(un_spec, sizeof(un_spec), "%%%c", *format);

				write(1, un_spec, cus_spec);
				char_cnt += cus_spec;
			}
		}
		else
		{
			char_cnt += write(1, format, 1);
		}
		format++;
	}

	va_end(sr_list);
	return (char_cnt);
}

