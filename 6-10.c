#include <stdio.h>

void main()
{
	int hap = 0;
	int i;
	int num1, num2, num3;

	printf("시작값, 끝값, 증가값 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	for (i = num1; i <= num2; i = i + num3)
	{
		hap = hap + i;
	}

	printf("%d에서 %d 까지 %d씩 증가한 값의 합 : %d \n", num1, num2, num3, hap);
}
