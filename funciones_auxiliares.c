#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _strlen - function that copies the string from src to dest.
 * @s: pointer to p. will recive the copy of src
 * Return: Always l
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * _strlenconst - function that copies the string from src to dest.
 * @s: pointer to p. will recive the copy of src
 * Return: Always l
 */
int _strlenconst(const char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
/**
 * _strcpy - function that copies the string from src to dest.
 * @dest: pointer to p. will recive the copy of src
 * @src: source point to s1.
 * Return: Always dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i;
	int len = _strlenconst(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (i < len)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}

/**
 *getNumberOfDigit - Give us the number of digits in one number
 *@n: bring the value from print_number
 *Return: The number of Digits.
 */

int getNumberOfDigit(int n)
{
	int nAux = n;
	int numDigits = 0;

	do {
		numDigits++;
		nAux /= 10;
	} while (nAux != 0);
	return (numDigits);
}
/**
 *power - give us the most near power of n.
 *@x: always 10
 *@y: digitNumber - 1
 *Return: power of the digits
 */

int power(int x, int y)
{
	int power = x;
	int i;

	if (y == 0)
	{
		return (1);
	}

	for (i = y; i > 1; i--)
	{
		power = power * x;
	}
	return (power);
}

