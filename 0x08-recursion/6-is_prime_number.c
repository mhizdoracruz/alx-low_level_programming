#include "main.h"

/**
 * is_divisible - the function to check the code
 *
 * @n: parameter
 * @divisor: parameter
 *
 * Return: Return 1 if the number is prime
 */

int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_divisible(n, divisor - 1));
	}
}

/**
 * is_prime_number - the function to check the code
 *
 * @n: parameter
 *
 * Return: Return 1 if the number is prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_divisible(n, n - 1));
	}
}
