#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/*PROTOTIPOS*/
int _printf(const char *format, ...);
/*funciones principales*/
int print_char(va_list c, char *b);
int print_string(va_list d, char *b);
int print_integer(va_list i, char *b);

/*Funciones auxiliares*/
int _strlen(char *s);
char *_strcpy(char *dest, const char *src);
int _strlenconst(const char *s);
int getNumberOfDigit(int n);
int power(int x, int y);
unsigned int absolute(int n);

#endif
