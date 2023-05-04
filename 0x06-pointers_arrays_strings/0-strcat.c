#include "main.h"
/**
 * _strcat - concatenates the two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int s;
	int i;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[s] = src[i];
		s++;
		i++;
	}

	dest[s] = '\0';
	return (dest);
}
