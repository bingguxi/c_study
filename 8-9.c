#include <string.h>
#include <stdio.h>

void main()
{
	char ss[] = "XYZ";
	int len;

	len = strlen(ss);

	printf("문자열 \"%s\"의 길이 ==> %d \n", ss, len);
}
