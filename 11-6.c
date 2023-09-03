#include <stdio.h>

void main()
{
	FILE *rfp;
	int hap=0;
	int in, i;

	rfp = fopen("c:\\c_study\\data2.txt", "r");

	for (i = 0; i < 5; i++)
	{
		fscanf(rfp, "%d", &in);
		hap = hap + in;
	}

	printf("гу╟Х ==> %d\n", hap);

	fclose(rfp);
}
