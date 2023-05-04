#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int s, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[s] != '\0'; s++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[s] == s1[j])
			{
				n[s] = s2[j];
			}
		}
	}
	return (n);
}
