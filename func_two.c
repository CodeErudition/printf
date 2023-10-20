#include "main.h"

/**
 * print_octal - Print an unsigned integer in octal format.
 *
 * @n: The unsigned integer to be printed in octal format.
 *
 * Return: int (in this case the number of printed characters).
 */

int print_octal(Uint n)
{
	char *ptr = malloc(sizeof(int) * (n / 8));
	int i = 0, j, cnt;

	while (n != 0)
	{
		ptr[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}
	cnt = i;
	for (j = i - 1; j >= 0; j--)
		_putchar(ptr[j]);
	free(ptr);
	return (cnt);
}

/**
 * print_hex - Print an unsigned integer in hexadecimal format
 * in upper or lowercase.
 *
 * @n: The unsigned integer to be printed in hexadecimal format.
 * @uppercase: If set to 1, print hexadecimal digits in uppercase (A-F);
 * if set to 0, print them in lowercase (a-f).
 *
 * Return: int (in this case the number of printed characters).
 */

int print_hex(Uint n, int uppercase)
{
	char *hex = malloc(sizeof(int) * (n / 16));
	int temp, i = 0, j, cnt, num;

	if (uppercase)
		num = 55;
	else
		num = 87;
	while (n != 0)
	{
		temp = n % 16;

		if (temp < 10)
			temp += '0';
		else
			temp += num;
		hex[i++] = temp;
		n /= 16;
	}
	cnt = i;
	for (j = i - 1; j >= 0; j--)
		_putchar(hex[j]);
	free(hex);
	return (cnt);
}

/**
 * print_binary - Print an unsigned integer as
 * a binary number.
 *
 * @n: The unsigned integer to be printed in binary.
 *
 * Return: The number of characters printed
 * (i.e., the binary length).
 */

int print_binary(Uint n)
{
	char *ptr = malloc(sizeof(int) * (n / 2));
	int i = 0, j, cnt;

	while (n != 0)
	{
		ptr[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}
	cnt = i;
	for (j = i - 1; j >= 0; j--)
		_putchar(ptr[j]);
	free(ptr);
	return (cnt);
}
