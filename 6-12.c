#include <stdio.h>

void main()
{
	int i, k;

	for (i=0; i<3; i++)
	{
	   for (k=0; k<2; k++)
	   {
	   	printf("중첩 for 문입니다. (i값 : %d, k값 : %d)\n", i, k);
	   }
	}
}
