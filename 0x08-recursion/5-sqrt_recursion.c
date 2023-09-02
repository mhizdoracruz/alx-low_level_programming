#include "main.h"

/**
 * _sqrt_recursive - The function to print the natural square of a number
 *
 * @n: parameter
 * @guess: parameter
 *
 * Return: to return -1 when number does not have a natural square root
 */

int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursive(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - The function to print the natural square of a number
 *
 * @n: parameter
 *
 * Return: to return -1 when number does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt_recursive(n, 1));
	}
}
