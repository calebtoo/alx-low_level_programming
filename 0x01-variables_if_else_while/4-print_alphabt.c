#include <stdio.h>

/**
 * main - omission of letters
 * Return: 0 (Always Success)
 */

int main(void)

{
	char alpha = 'a';

	while(alpha <= 'z')
	{
		if((alpha !='q') && (alpha !='e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
