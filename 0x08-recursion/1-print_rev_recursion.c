#include "main.h"
/**
* _print_rev_recursion - Prints a string in reverse.
* @w: The string to be printed.
*/
void _print_rev_recursion(char *w)
{
if (*w)
{
_print_rev_recursion(w + 1);
_putchar(*w);
}
}
