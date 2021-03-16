#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>

/**
 * print_char - print type char
 * @c: character
 * @b: pointer to buf
 * Return: number of characters
*/

int print_char(va_list c, char *b)
{
	char value;

	value = (char) va_arg(c, int);
	if (value)
		*b = value;
	return (1);
}

/**
 * print_string - prints string
 * @s: string
 * @b: pointer to buf
 * Return: number of characters
 */

int print_string(va_list s, char *b)
{
	int i = 0;
	char *value;

	value = (char *)va_arg(s, char *);

	while (value && *value)
	{
		*b = *value;
		value++;
		b++;
		i++;
	}
	return (i);
}
/**
 * print_integer - print type char
 * @i: format
 * @b: pointer to buf
 * Return: number of characters
 */
int print_integer(va_list i, char *b)
{
	int j = 0;
	int value = va_arg(i, int);
	int digitNumber = getNumberOfDigit(value);
	int divider = power(10, digitNumber - 1);
	unsigned int abs_n = absolute(value);
	int currentDigit = abs_n / divider;

	if (value < 0)
	{
		*b = '-';
		b++;
		j++;
	}

	do {
		currentDigit = abs_n / divider;
		*b = (currentDigit + 48);
		b++;
		j++;
		abs_n = abs_n % divider;
		divider = divider / 10;
	} while (divider != 0);

	return (j);
}

