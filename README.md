# __Printf
>function that produces output according to a format.
>_printf is a custom implementation of the C programming function printf. This project is an application of the C programming knowledge that Holberton School cohort 14 students have learned since starting the program on February 25, 2021.
## Documentation
>Please chack the man_3_printf page
## Usage
>Run the following command to prints format text
_printf("FORMAT []", )

Examples

String
Input: _printf("%s\n", 'This is a string.');
Output: This is a string.

Character
Input: _printf("The first letter is %c\n", 'A');
Output: The first letter is A

Integer
Input: _printf("There are %i cars in the street\n", 12);
Output: There are 12 cars in the street

Decimal:
Input: _printf("%d\n", 55000);
Output: 55000

Project Requirements

All files will be compiled on Ubuntu 14.04 LTS
Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
Code must follow the Betty style
Global variables are not allowed
Authorized functions and macros:
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

Mandatory Tasks
 Write function that produces output with conversion specifiers c, s, and %.
 Handle conversion specifiers d, i.
 Create a man page for your function.

 File Descriptions

 _Printf.c - contains the function _printf, which uses the prototype int _printf(const char *format, ...); The format string is composed of zero or more directives. See the man for more details.
 holberton.h - contains the prototipes of all functions needed for _printf
 man_3_printf - manual page for the _printf function
