#include <stdio.h>

void main()
{
	FILE *gugu;
	int i, j;

	gugu = fopen("c:\\c_study\\gugu.txt", "w");

	for (i=2; i<10; i++)
	{
		fprintf(gugu, " #Á¦%d´Ü# ", i);
	}

	fprintf(gugu, "\n\n");

	for (j=1; j<10; j++)
	{
		for (i=2; i<10; i++)
		{
			fprintf(gugu, "%2dX%2d=%2d ",i, j, i*j);
		}
		fprintf(gugu, "\n");
	}

	fclose(gugu);
}
