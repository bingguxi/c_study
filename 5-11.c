#include <stdio.h>

void main()
{
	int a, b;
	char c;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &c, &b);
	//scanf("%d", &a);
	//scanf("%c", &c);
	//scanf("%c", &c);
	//scanf("%d", &b);


	switch (c)
	{
		case '+' : printf("%d + %d = %d �Դϴ�.\n", a, b, a+b); break;   
		case '-' : printf("%d - %d = %d �Դϴ�.\n", a, b, a-b); break;
		case '*' : printf("%d * %d = %d �Դϴ�.\n", a, b, a*b); break;
		case '/' : printf("%d / %f = %f �Դϴ�.\n", a, b, a/b); break;
		case '%' : printf("%d % %d = %d �Դϴ�.\n", a, b, a%b); break;
		default : printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
	}
}
