#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @q: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char q)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == q)
			return (&s[i]);
	}
	return (0);
}
