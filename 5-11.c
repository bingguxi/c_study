#include <stdio.h>

void main()
{
	int a, b;
	char c;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &a, &c, &b);
	//scanf("%d", &a);
	//scanf("%c", &c);
	//scanf("%c", &c);
	//scanf("%d", &b);


	switch (c)
	{
		case '+' : printf("%d + %d = %d 입니다.\n", a, b, a+b); break;   
		case '-' : printf("%d - %d = %d 입니다.\n", a, b, a-b); break;
		case '*' : printf("%d * %d = %d 입니다.\n", a, b, a*b); break;
		case '/' : printf("%d / %f = %f 입니다.\n", a, b, a/b); break;
		case '%' : printf("%d % %d = %d 입니다.\n", a, b, a%b); break;
		default : printf("연산자를 잘못 입력했습니다.\n");
	}
}
