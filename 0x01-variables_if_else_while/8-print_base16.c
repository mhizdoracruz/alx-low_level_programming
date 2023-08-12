#include <stdio.h>

/**
 * main - the main function
 *
 * Return: Return 0
 */

int main(void)
{
	char i;
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
