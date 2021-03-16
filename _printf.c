#include <stdio.h>
#include <unistd.h> /*para write*/
#include <stdarg.h> /*para las macros va_...*/
#include <stdlib.h> /*mara malloc  free*/
#include "holberton.h"

/**
 * _printf - owr own printf function
 * @format: string con los formatos a usar
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	char *aux_format;
	va_list lista;
	static char *buf;
	int j = 0;
	int buf_len = 0;

	va_start(lista, format);
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
		return (0);
	aux_format = malloc(sizeof(char) * _strlenconst(format));
	if (!aux_format)
		return (0);
	aux_format = _strcpy(aux_format, format);
	while (aux_format && *aux_format) /*While(format != NULL && format != '\0'*/
	{
		if (*aux_format == '%')
			{
	    aux_format++;
		switch (*aux_format)
			{
		case 'c':
			j += print_char(lista, buf + j);
			break;
		case 's':
			j += print_string(lista, buf + j);
			break;
		default:
			break;
			}
		aux_format++;
			}
	*(buf + j) = *aux_format;
	j++;
	aux_format++;
	}
	write(1, buf, _strlen(buf));
	buf_len = _strlen(buf);
	free(buf);
	return (buf_len);
}
