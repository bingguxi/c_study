#include <stdio.h>

void gugu(int a)
{
	for (int i = 1; i < 10; i++)
	{
		printf("%2d X %2d= %2d\n", a, i, a * i);
	}
}

void main()
{
	int dan;
	
	printf("����ϰ� ���� ���� �Է� : ");
	scanf("%d", &dan);

	gugu(dan);
}
