#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return
 */

void print_number(int n)
{
	unsigned int m, d, count;

	count = 1;
/*Check negatives*/
	if (n >= 0)
		m = n * -1;
	else
	{
		m = n;
		_putchar('-');
	}

/*Initialize exponent variables*/
	d = m;
	while (d > 10)
	{
		count *= 10;
		d /= 10;
	}
/*Main*/
	while (count >= 1)
	{
		_putchar(((m / count) % 10) + 48);
		count /= 10;
	}
}
