#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 *
 * Return: Return 0
 */

int main(void)
{
	int d;
	int c;
	int e = 0;

	while (e < 10)
	{
		c = 0;
		while (c < 10)
		{
			d = 0;
			while (d < 10)
			{
				if (d != c && c != e && c < d && e < c)
				{
					putchar('0' + e);
					putchar('0' + c);
					putchar('0' + d);
					if (d + c + e != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				d++;
			}
			c++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
