#include <stdio.h>

void main()
{
	char ch;
	char* p;
	char* q;

	ch = 'A';
	p = &ch;

	q = p;

	*q = 'Z';

	printf("ch�� ������ �ִ� ��: ch ==> %c \n\n", ch);
	printf("q �� : %d \n", q);
	printf("p �� : %d \n", p);
	printf("q�� �ּ� �� : %d \n", &q);
	printf("p�� �ּ� �� : %d", &p);
}
