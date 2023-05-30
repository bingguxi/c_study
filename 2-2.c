#include <stdio.h>

void main()
{
	int a, b;
	int result;

	scanf("%d", &a);
	scanf("%d", &b);

	result = a + b;
	printf(" %d + %d = %d \n", a, b, result);
	
	result = a - b;
	printf(" %d - %d = %d \n", a, b, result);
	
	result = a * b;
	printf(" %d * %d = %d \n", a, b, result);
	
	result = a / b;
	printf(" %d / %d = %d \n", a, b, result);
}
