#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
​
​
int _strlen(char *s)
{
	int l;
	​
	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
		
	}
	return (l);
	
}
​
/*void (get_op_funct(const char format[]))(va_list l)
{
int i;
functions a_fun[] = {
        {'c', print_char},
        {'s', print_string},
      {'d', print_integer},
        {"i", print_integer},
	/*    {'\0', NULL}
        
};
i = 0;*/
	/*while ((a_fun[i].str))
	  {
	  if ((a_fun[i].str) == format[0])
	  {
	  return (a_fun[i].f);
	  }
	  i++;
	  
}

}*/
