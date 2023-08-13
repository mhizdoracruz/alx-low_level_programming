#include <stdio.h>

/**
 * main - the main function
 *
 * Return: Return 0
 */

int main(void)
{
	int d;
	int c = 0;

	while (c < 10)
	{
		d = 0;
		while (d < 10)
		{
			if (c != d && c < d)
			{
				putchar('0' + c);
				putchar('0' + d);
				if (d + c != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
