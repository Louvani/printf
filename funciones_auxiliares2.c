#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 *absolute - give us the absolute number if it is negative.
 *@n: bring the value from print_number
 *Return: An absolute number.
 */

unsigned int absolute(int n)
{
	unsigned int result;

	if (n < 0)
	{
		result = ((unsigned int)(n)) * -1;
	}
	else
	{
		result = ((unsigned int)(n));
	}
	return (result);
}
