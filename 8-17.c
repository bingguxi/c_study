#include <stdio.h>

void main()
{
	int gugu[9][9];
	int i, j;
	int val;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 8; j++)
		{
			val = (j+2) * (i+1);
			gugu[i][j] = val;
		}
	}

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%dX%d=%2d\t", j+2, i+1, gugu[i][j]);
		}
		printf("\n");
	}
}
