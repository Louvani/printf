#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"
void print_char(va_list c, char *buf);
void print_string(va_list d);
void print_integer(va_list i);

/**
 * _printf - owr own printf function
 * @format: string con los formatos a usar
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
    char *buf;
    int i, j, k;
    int len_buf = 0;
    va_list lista;
    functions a_fun[] = {
        {"c", print_char},
        {"s", print_string},
        {"d", print_integer},
        {"i", print_integer},
        {NULL, NULL}};

    i = 0;
    k = 0;

	va_start(lista, format);

    buf = malloc(sizeof(char) * 1024);

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            j = 0;
            while (a_fun[j] != '\0')
            {
                if (a_fun[j].str == format[i])
                {
                    a_fun[j].f(lista, buf[k]);
                }
                j++;
            }
        }
        buf[k] = format[i];
        k++;
        i++;
		write(1, buf, strelen(buf));
    }
	len_buf = strlen(buf);
	free(buf);
	va_end(lista);

	return(buf);
}