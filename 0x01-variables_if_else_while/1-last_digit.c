#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - The main function
 * Return: This will return 0
 */
int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;

	/* your code goes there */
	if (c > 5)
		printf("Last digit of, %i is %i and is greater than 5\n", n, c);
	else if (c == 0)
		printf("Last digit of, %i is %i and is 0\n", n, c);
	else
		printf("Last digit of, %i is %i and is less tham 6\n", n, c);
	return (0);
}
