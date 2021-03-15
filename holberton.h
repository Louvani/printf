#ifndef HOLBERTON_H
#define HOLBERTON_H
​
​
/**
 * struct op - Struct op
 *
 * @frmt: The format
 * @f: The function associated
 */
typedef struct array_of_functions
{
    char *str;
    void (*f)(va_list, char *);
} functions;
​
int _printf(const char *format, ...);
​
#endif /*HOLBERTON_H*/