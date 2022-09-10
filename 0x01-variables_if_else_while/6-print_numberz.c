#include <stdio.h>

/**
 * main - digits up to nine
 * Return: 0 (Always Success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
