#include "main.h"

/**
 * prime_con -determine if n is a prime number
 * @n: test case
 * @i: recurring factors
 * Description: determines if n is a prime number using two parameters
 * Return: 1 if n is a prime number, 0 if not
 */

int prime_con(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (n >= (i + 1) * (i * 1))
	{
		return (prime_con(n, i + 1));
	}
	return (1);
}

/**
 * is_prime_number - determines if n is a prime number
 * @n: number to check
 * Description: determine if n is a prime number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_con(n, 2));
}
