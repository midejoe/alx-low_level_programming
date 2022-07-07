#include <stdio.h>
#include "main.h"

/**
 * more_numbers - check main
 *
 * Description: function that prints 10 times the numbers, from 0 to 14
 * Return: Nothing
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				putchar(j + '0');
			}
			else
			{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
			}
		}
		printf("\n");
	}
}
