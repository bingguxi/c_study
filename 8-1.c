#include <stdio.h>

void main()
{
	int a, b, c, d;
	int hap;

	printf("1번째 숫자를 입력하세요 : ");
	scanf("%d", &a);

	printf("2번째 숫자를 입력하세요 : ");
	scanf("%d", &b);

	printf("3번째 숫자를 입력하세요 : ");
	scanf("%d", &c);

	printf("4번째 숫자를 입력하세요 : ");
	scanf("%d", &d);

	hap = a+b+c+d;

	printf("합계 ==> %d \n", hap);
}
