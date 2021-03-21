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
	char *aux_format; /*variable to keep a copy of format*/
	va_list lista;
	static char *buf; /*variable to keep all characteres*/
	int i = 0, j = 0; /*to itarate buf*/
	int buf_len = 0; /*Variable tu return the lenght of buf*/

	va_start(lista, format);
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
		return (0);
	
	aux_format = malloc(sizeof(char) * _strlenconst(format));
	if (aux_format == NULL)
		return (0);
	aux_format = _strcpy(aux_format, format); /*Aux_format copy of format*/

	while (aux_format && aux_format[i]) /*(format != NULL && format != '\0')*/
	{
		if (aux_format[i] == '%')
			{
	    i++;
		switch (aux_format[i])/*To send formats to the respectiv functions*/
			{
		case 'c':
			j += print_char(lista, buf + j);
			break;
		case 's':
			j += print_string(lista, buf + j);
			break;
		case 'd':
			j += print_integer(lista, buf + j);
			break;
		case 'i':
			j += print_integer(lista, buf + j);
			break;
		case 'b':
			j += print_binary(lista, buf + j);
			break;
		case '%':
			*(buf + j) = '%';
			j++;
			break;
		default:
			*(buf + j) = '%';
			j++;
			*(buf + j) = aux_format[i];
			j++;
			break;
			}
			i++;
			}
		*(buf + j) = aux_format[i];
		j++;
		i++;
	}
	write(1, buf, _strlen(buf)); /*Only one write in all functión*/
	buf_len = _strlen(buf);
	va_end(lista);
	free(buf);
	return (buf_len);
}
