#include <main.h>

int main(void)
{
	int n = 0;
	char str_hbt[9] = "_putchar";

	while (n < 9)
	{
		putchar(str_hbt[n]);
		n += 1;
	}
	putchar('\n');
	return (0);
}
