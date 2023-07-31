#include <string.h>
#include <stdio.h>

void main()
{
	char ss[20];
	char tt[20];
	int r1, r2;

	puts("첫번째 문자열을 입력하세요.");
	gets(ss);

	puts("두번째 문자열을 입력하세요.");
	gets(tt);

	r1 = strlen(ss);
	r2 = strlen(tt);

	printf("첫번째 문자열의 길이 ==> %d \n", r1);
	printf("두번째 문자열의 길이 ==> %d \n", r2);
	if (strcmp(ss, tt) == 0)
		puts("두 문자열의 내용이 같습니다.\n");
	else
		puts("두 문자열의 내용이 다릅니다.\n");
}
