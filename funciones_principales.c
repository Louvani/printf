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
