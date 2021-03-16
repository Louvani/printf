#include <stdarg.h>
#include "holberton.h"

/**
 * print_char - print type char
 * @c: character
 */

 void print_char(va_list c)
 {
    char *value;
	*value = (char) va_arg(c, int);
	funct_buf(value);
 }

/**
 * print_string - prints string
 * @s: string
 */

 void print_string(va_list s)
 {
	char *value;
	value = va_arg(s, char *);

	while (value)
	{
		funct_buf(value);
		value++;
	}
 }
/**
 * print_integer - print type char
 * @i: format
 * Return: integer
 *
void print_integer(va_list i)
 {
​
 }*/