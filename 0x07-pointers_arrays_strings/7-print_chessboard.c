#include "holberton.h"

/**
 *print_chessboard-prints chessboard
 *Description:prints chessboard format from an array
 *@a: of the board
 *Return:0
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; a[i][7]; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
