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

