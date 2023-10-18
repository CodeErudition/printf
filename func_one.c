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

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
		cnt++;
	}
	return (cnt);
}


/**
 * print_int - A functio that prints integer
 *
 * @n: integer to be printed
 *
 * Return: int (in this case the number of printed character)
 */

int print_int(int n)
{
	cha c[12];;
	int j, i = 0, m, cnt = 1;

	for (j = 0; j < 12; j++)
	{
		c[j] = '\0';
	}
	if (n < 0)
	{
		_putchar('-');
		m = -n;
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
	for (; i >= 0; i--)
	{
		_putchar(c[i]);
	}
	return (cnt);
}

/**
 * print_unsigned - A function that prints unsigned integer.
 *
 * @n: Integer to be printed.
 *
 * Return: int (in this case the number of printed charcters)
 */

int print_unsigned(unsigned int n)
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
	return cnt;
}
