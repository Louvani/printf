#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * array_of_functios - array con funciones de formato
 * @str: identificadores de formato
 * @f: funciones
 */

typedef struct holberton
{
    char str;
    void (*f)(va_list);
} functions;

/*PROTOTIPOS*/
int _printf(const char *format, ...);

/*funciones principales*/
void print_char(va_list c);
void print_string(va_list d);
void print_integer(va_list i);

/*Funciones auxiliares*/
int _strlen(char *s);
/*void (get_op_funct(const char format[]))(va_list);*/
int funct_buf(char *s);

#endif