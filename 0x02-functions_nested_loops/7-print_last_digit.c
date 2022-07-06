#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int li;

	li = n % 10;
	if (li < 0)
	{
		_putchar(-li + 48);
		return (-li);
	}
	else
	{
		_putchar(li + 48);
		return (li);
	}
}
