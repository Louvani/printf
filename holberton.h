#ifndef HOLBERTON_H
#define Holberton_h
#include <stdarg.h>

/*PROTOTIPOS*/
int _printf(const char *format, ...);

/*funciones principales*/
int print_char(va_list c, char *b);
int print_string(va_list d, char *b);
char *print_integer(va_list i, char *b);

/*Funciones auxiliares*/
int _strlen(char *s);
char *_strcpy(char *dest, const char *src);
int _strlenconst(const char *s);
/*void (get_op_funct(const char format[]))(va_list);*/
int funct_buf(char *s);

#endif