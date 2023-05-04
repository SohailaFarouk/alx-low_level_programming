#include "main.h"
/**
 * _strncat - it concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s;
	int i;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
	dest[s] = src[i];
	s++;
	i++;
	}
	dest[s] = '\0';
	return (dest);
}
