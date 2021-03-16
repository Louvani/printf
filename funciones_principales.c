#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>

/**
 * print_char - print type char
 * @c: character
 */

 int print_char(va_list c, char *b)
 {
	int i;
    char value;

	value = (char) va_arg(c, int);
	printf("deberia %c\n", value);
	if (value)
 		*b = value;
	return (1);
 }

/**
 * print_string - prints string
 * @s: string
 */

 int print_string(va_list s, char *b)
 {
	int i = 0;
	char *value;
	value = (char *)va_arg(s, char *);

	while (*value)
	{
		*b = *value;
		value++;
		b++;
		i++;
	}
	return(i + 1);
 }
/**
 * print_integer - print type char
 * @i: format
 * Return: integer
 *
char *print_integer(va_list i, char *b)
 {
​
 }*/