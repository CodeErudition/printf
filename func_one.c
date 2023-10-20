#include "main.h"

/**
 * _putchar - A function that outputs character
 *
 * @c: The character to be printed.
 *
 * Return: 1 on success else -1.
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - A function that prints string.
 *
 * @str: A pointer to the string to be printed.
 *
 * Return: int (in this case the number of printer characters
 */

int print_str(char *str)
{
	int j, cnt = 0;

	if (str == NULL)
		str = "(null)";

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
		cnt++;
	}
	return (cnt);
}

/**
 * p_print - prints percent
 *
 * Return: integer
 */

int p_print(void)
{
	_putchar('%');
	return (1);
}

/**
 * print_int - A function that prints integer
 *
 * @n: integer to be printed
 *
 * Return: int (in this case the number of printed character)
 */

int print_int(int n)
{
	char *c = malloc(sizeof(int) * log10(n) + 1);
	int j, i = 0, m, cnt = 0;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
		cnt++;
	}
	else
	{
		m = n;
	}

	while (m)
	{
		c[i] = m % 10 + '0';
		m /= 10;
		i++;
	}

	if (n == 0)
	{
		c[i] = '0';
	}

	cnt = i;
	for (j = 0; j >= 0; j--)
	{
		_putchar(c[j]);
	}

	return (cnt);
}

/**
 * print_uint - A function that prints unsigned integer.
 *
 * @n: Integer to be printed.
 *
 * Return: int (in this case the number of printed charcters)
 */

int print_uint(Uint n)
{
	char c[12];
	int cnt = 0;
	int j, i = 0;
	int forward = 0, backward;

	while (n > 0)
	{
		c[i++] = n % 10 + '0';
		n /= 10;
	}
	backward = i - 1;
	while (forward < backward)
	{
		char temp = c[forward];

		c[forward] = c[backward];

		c[backward] = temp;
		forward++;
		backward--;
	}
	for (j = 0; j < i; j++)
	{
		cnt += _putchar(c[j]);
	}
	return (cnt);
}
