#include "holberton.h"
/**
 *print_chessboard - prints the chessboard.
 *@a: board.
 */
void print_chessboard(char (*a)[8])
{
int i = 0, n = 0;
while (n < 8)
{
while (i < 8)
{
_putchar(a[n][i]);
i++;
}
_putchar('\n');
n++;
i = 0;
}
}
