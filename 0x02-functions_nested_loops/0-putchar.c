#include "main.h"

/**
 * main - program that prints putchar.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_hbt[9] = "putchar";

	while (n < 9)
	{
		_putchar(str_hbt[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
