#include <stdio.h>
#include <unistd.h> /*para write*/
#include <stdarg.h> /*para las macros va_...*/
#include <stdlib.h> /*mara malloc  free*/
#include "holberton.h"
#include <string.h> /*para strlen - hay que poner nuestra funcion*/



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
		/* {'d', print_integer
	},
        {"i", print_integer},*/
		{'\0', NULL},
	};
	char *aux_format;
	va_list lista;

	va_start(lista, format);

	while (aux_format && *aux_format) /*While(format != NULL && format != '\0'*/
	{
		if (*aux_format == '%')
		{
			aux_format++;
			while ((a_fun[i].str))
			{
				if ((a_fun[i].str) == aux_format[0])
				{
					a_fun[i].f(lista);
				}
				i++;
				            
			}
			        
		}

		funct_buf(aux_format);
		aux_format++;
		    
	}

	return(0);
	
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
