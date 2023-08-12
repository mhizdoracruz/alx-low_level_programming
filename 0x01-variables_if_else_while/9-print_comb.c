#include <stdio.h>

/**
 * main - the main function
 *
 * Return: Return 0
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c + '0');
		{
			putchar(44);
			putchar(32);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
