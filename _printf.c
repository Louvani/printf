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
    int i= 0;
    functions a_fun[] = {
        {'c', print_char},
        {'s', print_string},
     /* {'d', print_integer},
        {"i", print_integer},*/
        {'\0', NULL},
        };
    char *aux_format;
    va_list lista;

    static char buf[1024];
    static int j = 0;
    static char *pfinal = buf + 1024;
    static char *plibre = buf;
    int buf_len = 0;

	va_start(lista, format);

	aux_format = malloc(sizeof(char) * _strlenconst(format));
	aux_format = _strcpy(aux_format, format);

    while (aux_format && *aux_format) /*While(format != NULL && format != '\0'*/
    {
        if (*aux_format == '%')
        {
            aux_format++;
			i = 0;
           	while ((a_fun[i].str))
	        {
	        	if ((a_fun[i].str) == aux_format[0])
	    		{
		        	a_fun[i].f(lista);
		        }
		    i++;
            }
        }
		else
		{
        	buf[j] = *aux_format;
			plibre++;
    		j++;
		}
		aux_format++;
    }
	write(1, buf, _strlen(buf));
	buf_len = _strlen(buf);
	return(buf_len);
}

int funct_buf(char *s)
{
    static char buf[1024];
    static int i = 0;
    static char *pfinal = buf + 1024;
    static char *plibre = buf;
    int buf_len = 0;

    buf[i] = *s;
    plibre++;
    i++;
    if (plibre == pfinal)
    {
        plibre = buf;
        *plibre = '\0';
    }
    buf_len = _strlen(buf);
    return (buf_len);
}