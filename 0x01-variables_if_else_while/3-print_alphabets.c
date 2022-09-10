#include <stdio.h>

/**
 * main - prints cases
 * Return: 0 (Always Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'a')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'A')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return(0);
}
