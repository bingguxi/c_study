#include <stdio.h>

void main()
{
	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		hap = hap + i;

		if (hap >= 1000)
			break;
	}

	printf("1~100의 합에서 최초로 1000이 넘는 위치는? : %d\n", i);
}
