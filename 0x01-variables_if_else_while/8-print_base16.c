#include <stdio.h>

/**
 * main - hexadecimal
 * Return: 0 (Always Success)
 */

int main(void)
{
	int n = '0';
	int a_to_f = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (a_to_f <= 'f')
	{
		putchar(a_to_f);
		a_to_f++;
	}
	putchar('\n');
	return (0);
}
