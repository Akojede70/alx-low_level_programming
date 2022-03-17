#include "main.h"

/**
 * 0-isupper.c - checks for uppercase
 * @c: c is an ascii character
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'z'; uppercase++)
	{
		if (c == uppercase)
		{
	                isupper = 1;
			break;
		}

	}
	

		return (isupper);
	
}
