#include <stdio.h>

int plus(int v1, int v2)
{
	int result;
	result = v1 + v2;
	return result;
}

void main()
{
	int hap;

	hap = plus(100, 200);

	printf("100과 200의 plus() 함수 결과는 : %d\n", hap);
}
