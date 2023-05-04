#include "main.h"
/**
 * reverse_array - the reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int q;

	for (i = 0; i < n--; i++)
	{
		q = a[i];
		a[i] = a[n];
		a[n] = q;
	}
}
