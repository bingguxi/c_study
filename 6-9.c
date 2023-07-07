#include <stdio.h>

void main()
{
	int hap = 0;
	int i;
	int num;

	printf("값 입력 : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		hap = hap + i;
	}

	printf("1에서 %d까지의 합 : %d \n", num, hap);
}
