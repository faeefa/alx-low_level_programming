#include "stdio.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: input of table n
 * Return: nothing.
 */

void print_times_table(int n)
{
	int row, col;
	int mult = 0;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				mult = (row * col);
				if (mult < 10)
				{
					if (col != 0)
					{
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
					putchar(mult + '0');
				}
				else if (mult < 100)
				{
					putchar(' ');
					putchar(' ');
					putchar((mult / 10) + '0');
					putchar((mult % 10) + '0');
				}
				else
				{
					putchar(' ');
					putchar((mult / 100) + '0');
					putchar(((mult % 100) / 10) + '0');
					putchar((mult % 10) + '0');
				}
				if (col != n)
					putchar(',');
			}
			putchar('\n');
		}
	}
}
