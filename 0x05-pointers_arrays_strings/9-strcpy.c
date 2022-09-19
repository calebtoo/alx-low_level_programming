#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: length
 */

/**
 * int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
*/

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte
 * to the buffer pointed to by dest
 * @dest: coopy source to this buffer
 * @src: source to copy
 * Return: copy of the original source
 */

char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
