#include <stdio.h>

void main()
{
	int* p1;
	int* p2; // int *p1, *p2; �̷��� �� �� �ε� �ۼ� ����!
	int a, b, tmp;

	printf("a �� �Է� : ");
	scanf("%d", &a);

	printf("b �� �Է� : ");
	scanf("%d", &b);

	p1 = &a;
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("�ٲ� �� a�� %d, b�� %d", *p1, *p2);
}
