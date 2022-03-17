#include "main.h"

/**
 * 0-isupper.c - checks for uppercase
 * @c: c is an ascii character
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
