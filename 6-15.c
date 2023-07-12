#include <stdio.h>

void main()
{
	int i, k;

	for (i = 1, k = 1; i <= 9; i++, k++)
		printf("%d X %d = %d \n", i, k, i*k);
}
