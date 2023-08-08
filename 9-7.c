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

	printf("ch가 가지고 있는 값: ch ==> %c \n\n", ch);
	printf("q 값 : %d \n", q);
	printf("p 값 : %d \n", p);
	printf("q의 주소 값 : %d \n", &q);
	printf("p의 주소 값 : %d", &p);
}
