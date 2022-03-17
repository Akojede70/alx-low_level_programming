#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ is printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int l, s;

		for (l = 0; l < n; l++)
		{
			for (s = 0; s < n; s++)
			{
			if (s == l)
				_putchar('\\');
			else if (s < l)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
