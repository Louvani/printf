#include <stdarg.h>
#include "holberton.h"
​
/**
 * print_char - print type char
 * @c: format
 * Return: char
 */
​
 void print_char(va_list c, char *buf)
 {
    char *value;
	value = (char) va_arg(c, int);
	*buf += *value;
 }
​
/**
 * print_integer - print type char
 * @d: format
 * Return: integer
 */
​
 void print_string(va_list s, char *buf)
 {
    int i;
	char *value;
	value = (char) va_arg(s, char *);
​
	while (value[i] != '\0')
	{
		*(buf + i) = value[i];
		i++;
	}
 }
/**
 * print_integer - print type char
 * @d: format
 * Return: integer
 */
void print_integer(va_list i)
 {
​
 }