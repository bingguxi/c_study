#include <string.h>
#include <stdio.h>

void main()
{
	char ss[7] = "XYZ";

	strcat(ss, "ABC");

	printf("이어진 문자열 ss의 내용 ==> %s \n", ss);
}
