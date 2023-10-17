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
	char c[12];
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
