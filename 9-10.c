#include <stdio.h>

void main()
{
	int* p1;
	int* p2; // int *p1, *p2; 이렇게 한 줄 로도 작성 가능!
	int a, b, tmp;

	printf("a 값 입력 : ");
	scanf("%d", &a);

	printf("b 값 입력 : ");
	scanf("%d", &b);

	p1 = &a;
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("바뀐 값 a는 %d, b는 %d", *p1, *p2);
}
