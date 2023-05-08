#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int s;

	for (i = 0; i < 8; i++)
	{
		for (s = 0; j < 8; s++)
			_putchar(a[i][s]);
		_putchar('\n');
	}
}
