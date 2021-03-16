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
