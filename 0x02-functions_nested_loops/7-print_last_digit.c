#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (n < 0)
		a = a * -1;

	_putchar(a + '0');

	return (a);
}
